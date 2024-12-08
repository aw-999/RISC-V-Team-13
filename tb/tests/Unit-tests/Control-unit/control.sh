#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vcontrol

verilator -Wall --trace \
          -cc control.sv \
          --exe control.cpp \
          --prefix "Vcontrol" \
          -o Vcontrol \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vcontrol.mk

# Run the simulation
./obj_dir/Vcontrol