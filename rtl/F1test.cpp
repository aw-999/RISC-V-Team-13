#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env)
{
    int i, tick, simcyc;

    Verilated::commandArgs(argc, argv);

    Vtop *top = new Vtop;

    // turning on signal tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("F1test");
    vbdSetMode(1); // one-shot mode
    vbdBar(0);     // clear light

    // input init
    top->clk = 0;
    top->rst = 0;
    top->trigger = 0;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + top->clk);
            top->clk = !top->clk;
            top->eval();
        }

        // F1startX
        vbdCycle(simcyc);
        top->trigger = vbdFlag();
        vbdBar(top->a0 & 0xFF);
        vbdHex(4, (int(top->a0) >> 12) & 0xF);
        vbdHex(3, (int(top->a0) >> 8) & 0xF);
        vbdHex(2, (int(top->a0) >> 4) & 0xF);
        vbdHex(1, int(top->a0) & 0xF);
        // F1endX
        // Dont forget changing memory read file inside rom.sv into F1.mem!

        if (Verilated::gotFinish() || vbdGetkey() == 'q')
            exit(0);
    }
    tfp->close();
    exit(0);
}
