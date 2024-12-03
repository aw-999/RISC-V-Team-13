module regfile #(parameter ADDRESS_WIDTH = 5, DATA_WIDTH = 32 )( // A0 = reg[10] or reg 01010 , parameter R0 = 10??
    input logic clk,
    input logic RegWrite, //WE3 Write Enable
    input logic [ADDRESS_WIDTH-1:0] write_addr, //A3 - Address for writing data to
    input logic [ADDRESS_WIDTH-1:0] A1, //A1 - Address 1 for read port
    input logic [ADDRESS_WIDTH-1:0] A2, //A2 - Address 2 for read port 2
    input logic [DATA_WIDTH-1:0] DIn, // WD3 - Data to store at given address port
    output logic [DATA_WIDTH-1:0] DOut1, //RD1 - read data 1 from A1
    output logic [DATA_WIDTH-1:0] DOut2, //RD2 - read data 2 from A2
    output logic [DATA_WIDTH-1:0] A0  // register 10 output
);
logic [DATA_WIDTH-1: 0] register_array [2**ADDRESS_WIDTH-1: 0];

assign register_array[0] = 0;

assign DOut1 = register_array[A1];
assign DOut2 = register_array[A2];

always_ff@(posedge clk)
    if (RegWrite && write_addr != 5'b0) register_array[write_addr] <= DIn;

assign A0 = register_array[10];

endmodule

/* 
x0  	zero	Always zero	
x1      ra	    Return address	
x2	    sp	    Stack pointer
x3	    gp	    Global pointer	
x4	    tp	    Thread pointer	
x5	    t0	    Temporary / alternate return address
x6–7	t1–2	Temporaries
x8	    s0/fp	Saved register / frame pointer
x9	    s1	    Saved register
x10–11	a0–1	Function arguments / return values
x12–17	a2–7	Function arguments
x18–27	s2–11	Saved registers
x28–31	t3–6	Temporaries

32 floating-point extension registers

f0–7	ft0–7	Floating-point temporaries
f8–9	fs0–1	Floating-point saved registers
f10–11	fa0–1	Floating-point arguments/return values
f12–17	fa2–7	Floating-point arguments
f18–27	fs2–11	Floating-point saved registers
f28–31	ft8–11	Floating-point temporaries
*/
