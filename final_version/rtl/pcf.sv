module pcf #(
    parameter WIDTH = 32
)(
    input logic clk,
    //input logic rst,
    input logic flushD,
    input logic stallD,

    input logic [WIDTH - 1:0] instrF,
    input logic [WIDTH - 1:0] pcF,
    input logic [WIDTH - 1:0] pcplus4F,
    
    output logic [WIDTH - 1:0] instrD,
    output logic [WIDTH - 1:0] pcD,
    output logic [WIDTH - 1:0] pcplus4D
    
);


always_ff @(posedge clk) begin

    // if (rst) begin
    //     InstrD <= 0;
    //     PCD <= 0;
    //     PCPlus4D <= 0;
    // end

    if (flushD) begin 
        instrD <= {27'b0, 5'b10011};
        pcD <= pcF;
        pcplus4D <= pcplus4F;
    end

    else if (stallD == 0) begin
        instrD <= instrF;
        pcD <= pcF;
        pcplus4D <= pcplus4F;
    end
end

endmodule
