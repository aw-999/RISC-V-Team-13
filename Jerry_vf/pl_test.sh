#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vmain_top

verilator -Wall --trace \
          -cc Jerry_PL_main.sv \
          -top-module Jerry_PL_main \
          PL_ALU.sv \
          PL_ALUDecode.sv \
          PL_ControlUnit.sv \
          PL_DataMemory.sv \
          HU_PcRegister.sv \
          PL_PCSrc_gate.sv \
          PL_Extend.sv \
          PL_Incrementby4.sv \
          PL_InstructionMemory.sv \
          PL_PCSrc_mux.sv \
          PL_RegisterFile.sv \
          PL_SrcB_mux.sv \
          PCD.sv \
          PCE.sv \
          PCF.sv \
          PCM.sv \
          HazardUnit.sv \
          ForwardAE_mux.sv \
          ForwardBE_mux.sv \
          PL_Add_PC_imm.sv \
          PL_MUX_Resultsrc.sv \




          --exe 1_addi_bne.cpp \
          --prefix "Vmain_top" \
          -o Vmain_top \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vmain_top.mk

# Run the simulation
./obj_dir/Vmain_top
