#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vimm

# Translate Verilog -> C++ including testbench
verilator -Wall --trace \
          -cc imm.sv \
          --exe signext.cpp \
          -o Vimm \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vimm.mk

# Check if the executable was created successfully
    echo "Build successful. Running simulation..."
    # Run the simulation
    ./obj_dir/Vimm

