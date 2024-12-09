#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f VALUDecode

verilator -Wall --trace \
          -cc ALUDecode.sv \
          --exe ALUDecode.cpp \
          --prefix "VALUDecode" \
          -o VALUDecode \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f VALUDecode.mk

# Run the simulation
./obj_dir/VALUDecode