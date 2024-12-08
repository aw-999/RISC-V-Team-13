input logic trigger added

TRIGGER inside reg32.sv
trigger inside datapath1.sv
trigger_in inside main.sv

use input logic trigger_in to call at testbench

// change rom.sv read file into the .mem file u want to test
// reg32.sv file are changed due to an extra input of trigger -- a button to switch on Vbuddy \
// trigger is saved on t0 (x5) register, as a temporary variable with a value 1 when activated (set in reg32.sv)
// main.sv also need to be wired uo to add trigger as a major input
// then the logic input inside testbench can be tested 

fixed op7 posiioning and ALUSRC logic 8/12/2024
F1 test ready now!
