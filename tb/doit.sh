#!/bin/bash

# This script runs the testbench
# Usage: ./doit.sh <file1.cpp> <file2.cpp>

# Constants
SCRIPT_DIR=$(dirname "$(realpath "$0")")
TEST_FOLDER=$(realpath "$SCRIPT_DIR/tests")
RTL_FOLDER=$(realpath "$SCRIPT_DIR/../rtl")
GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

# Variables
passes=0
fails=0

# Google Test paths (adjust these as necessary)
GTEST_INCLUDE_PATH="/opt/homebrew/include"  # Path to Google Test includes
GTEST_LIB_PATH="/opt/homebrew/lib"          # Path to Google Test libraries

# Handle terminal arguments
if [[ $# -eq 0 ]]; then
    # If no arguments provided, run all tests
    files=(${TEST_FOLDER}/*.cpp)
else
    # If arguments provided, use them as input files
    files=("$@")
fi

cd $SCRIPT_DIR

# Wipe previous test output
rm -rf test_out/*

# Set environment variables for make
export CXXFLAGS="-I${GTEST_INCLUDE_PATH}"  # Add Google Test include path
export LDFLAGS="-L${GTEST_LIB_PATH} -lgtest -lgtest_main -lpthread"  # Add Google Test library path

# Iterate through files
for file in "${files[@]}"; do
    name=$(basename "$file" _tb.cpp | cut -f1 -d\-)

    # If verify.cpp -> we are testing the top module
    if [ $name == "verify.cpp" ]; then
        name="top"
    fi

    # Translate Verilog -> C++ including testbench
    verilator   -Wall --trace \
                -cc ${RTL_FOLDER}/${name}.sv \
                --exe ${file} \
                -y ${RTL_FOLDER} \
                --prefix "Vdut" \
                -o Vdut

    # Build C++ project with automatically generated Makefile
    make -j -C obj_dir/ -f Vdut.mk

    # Run executable simulation file
    ./obj_dir/Vdut

    # Check if the test succeeded or not
    if [ $? -eq 0 ]; then
        ((passes++))
    else
        ((fails++))
    fi

done

# Save obj_dir in test_out
mv obj_dir test_out/

# Print summary
echo -e "${GREEN}Passed: $passes${RESET}"