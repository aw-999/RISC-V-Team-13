module pcf #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic flushED,
    input logic stallFD,

    input logic [WIDTH - 1:0] instrF,
    input logic [WIDTH - 1:0] pcF,
    input logic [WIDTH - 1:0] pcplus4F,
    
    output logic [WIDTH - 1:0] instrD,
    output logic [WIDTH - 1:0] pcD,
    output logic [WIDTH - 1:0] pcplus4D
    
);


always_ff @(posedge clk) begin

    if (flushED) begin 
        instrD <= 0;
        pcD <= 0;
        pcplus4D <= 0;
    end

    else if (!stallFD) begin
        instrD <= instrF;
        pcD <= pcF;
        pcplus4D <= pcplus4F;
    end
end

endmodule
