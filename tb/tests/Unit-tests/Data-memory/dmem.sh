#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vram

verilator -Wall --trace \
          -cc ram.sv \
          --exe dmem.cpp \
          --prefix "Vram" \
          -o Vram \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vram.mk

# Run the simulation
./obj_dir/Vram