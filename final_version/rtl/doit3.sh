#!/bin/bash

# Clean up any previous builds
rm -rf obj_dir
rm -f Vtop

verilator -Wall --trace \
          -cc top.sv \
          -top-module top \
          L1cache.sv \
          CacheMemoryTop.sv \
          alu.sv \
          aludecode.sv \
          control.sv \
          datamemory.sv \
          hazardunit.sv \
          instructionmemory.sv \
          mux_alu.sv \
          mux_pcsrc.sv \
          mux_srcae.sv \
          mux_srcbe.sv \
          mux_jalr.sv \
          mux_writeback.sv \
          pcadder.sv \
          pcd.sv \
          pce.sv \
          pcf.sv \
          pcincrementby4.sv \
          pcm.sv \
          pcreg.sv \
          regfile.sv \
          signextend.sv \
          --exe 1_addi_bne.cpp \
          --prefix "Vtop" \
          -o Vtop \
          -I/usr/local/share/verilator/include \
          -LDFLAGS "-lgtest -lgtest_main -lpthread"


# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vtop.mk

# Run the simulation
./obj_dir/Vtop