module PCFetch #(
    parameter WIDTH = 32,
)(
    input logic clk,
    input logic rst,

    input logic [WIDTH - 1:0] InstrF,
    input logic [WIDTH - 1:0] PCF,
    input logic [31:0] PCPlus4F,
    
    output logic [WIDTH - 1:0] InstrD,
    output logic [WIDTH - 1:0] PCD,
    output logic [WIDTH - 1:0] PCPlus4D,
    
);

always_ff @(posedge clk) begin

    if (rst) begin
        instrD <= 0;
        PCD <= 0;
        PCPlus4D <= 0;
    end

    else begin
        instrD <= InstrF;
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end
end

endmodule
