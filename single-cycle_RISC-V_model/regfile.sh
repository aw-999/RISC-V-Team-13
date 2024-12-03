#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vreg32

verilator -Wall --trace \
          -cc reg32.sv \
          --exe regfile32.cpp \
          --prefix "Vreg32" \
          -o Vreg32 \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vreg32.mk

# Run the simulation
./obj_dir/Vreg32