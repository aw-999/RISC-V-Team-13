#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vmain_top

verilator -Wall --trace \
          -cc main_top.sv \
          -top-module main_top \
          ALU.sv \
          ALUDecode.sv \
          ControlUnit.sv \
          DataMemory.sv \
          Branch.sv \
          Extend.sv \
          Incrementby4.sv \
          InstructionMemory.sv \
          PCReg.sv \
          PCSrc_mux.sv \
          RegisterFile.sv \
          SrcB_mux.sv \
          WriteBack_mux.sv \
          --exe 1_addi_bne.cpp \
          --prefix "Vmain_top" \
          -o Vmain_top \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vmain_top.mk

# Run the simulation
./obj_dir/Vmain_top