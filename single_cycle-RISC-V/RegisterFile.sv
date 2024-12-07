module RegisterFile #(parameter WAD = 5, WD = 32, R0 = 10)( // A0 = reg[10] or reg 01010
    input logic clk,
    input logic RegWrite,
    input logic TRIGGER, 

    input logic [WAD-1:0] AdIn, //A3, instr[11:7]
    input logic [WAD-1:0] AdOut1, //instr[19:15]
    input logic [WAD-1:0] AdOut2, //instr[24:20]
    output logic [WD-1:0] DIn, //formerly DIn
    output logic [WD-1:0] RD1, //formerly Dout1
    output logic [WD-1:0] RD2, //formerly Dout2
    output logic [WD-1:0] A0
);

logic [WD-1: 0] RegArr [2**WAD-1: 0];

always_ff@(posedge clk)
begin
    if (RegWrite) RegArr[AdIn] <= DIn;

    if (TRIGGER) begin
        RegArr[5] <= 32'b1; 
    end

    RegArr[0] <= 32'b0;
end

assign RD1 = RegArr[AdOut1];
assign RD2 = RegArr[AdOut2];

assign A0 = RegArr[R0];

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