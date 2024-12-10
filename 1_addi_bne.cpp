#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VJerry_PL_main.h"

#include <iostream>   

#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;       

  std::ignore = system("touch program.hex");

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VJerry_PL_main * top = new VJerry_PL_main;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("VCD/Test1.vcd");

  // initialise simulation inputs
  top->clk = 1;
  top->rst = 0;

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
    top->rst = (simcyc < 3); // Assert reset for the first two cycles
    if (Verilated::gotFinish())  exit(0);
  }

  std::cout << "a0: " << top->A0 << std::endl;
  std::cout << "a1: " << top->a1 << std::endl;
  tfp->close(); 
  exit(0);
}
