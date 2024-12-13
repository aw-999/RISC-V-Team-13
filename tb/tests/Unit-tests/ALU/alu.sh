#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Valu

verilator -Wall --trace \
          -cc alu.sv \
          --exe alu.cpp \
          --prefix "Valu" \
          -o Valu \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Valu.mk

# Run the simulation
./obj_dir/Valu