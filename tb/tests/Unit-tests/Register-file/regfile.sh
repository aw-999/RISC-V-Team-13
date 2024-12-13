#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vregfile

verilator -Wall --trace \
          -cc regfile.sv \
          --exe regfile.cpp \
          --prefix "Vregfile" \
          -o Vregfile \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vregfile.mk

# Run the simulation
./obj_dir/Vregfile