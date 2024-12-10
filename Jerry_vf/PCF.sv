module PCF #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic flushD,
    input logic StallD,

    input logic [WIDTH - 1:0] InstrF,
    input logic [WIDTH - 1:0] PCF,
    input logic [WIDTH - 1:0] PCPlus4F,
    
    output logic [WIDTH - 1:0] InstrD,
    output logic [WIDTH - 1:0] PCD,
    output logic [WIDTH - 1:0] PCPlus4D
    
);


always_ff @(posedge clk or posedge rst) begin

    if (rst) begin
        InstrD <= 0;
        PCD <= 0;
        PCPlus4D <= 0;
    end

    else if (flushD) begin 
        InstrD <= {27'b0, 5'b10011};
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end

    else if (StallD == 0) begin
        InstrD <= InstrF;
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end
end

endmodule
