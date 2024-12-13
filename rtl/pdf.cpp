
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vmain_top.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges (rising / falling edge)

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vmain_top* top = new Vmain_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("pdf.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("Pdf Test");
  //vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval (); //evaluates on rising/falling edge
    }

    // plot ROM output and print cycle count
    if(top->a0 != 0){
        if(top->a0 % 1 == 0){
            vbdPlot(int (top->a0),0 , 255);
            vbdCycle(simcyc);
    }
    }

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);                // ... exit if finish OR 'q' pressed , need a way to sec
  }

  vbdClose();    
  tfp->close(); 
  exit(0);
}
