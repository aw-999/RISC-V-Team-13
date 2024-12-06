module PCReg (
    input logic clk,
    input logic PCFDash,

    output logic PCF
);

always_ff @(posedge clk) begin
    PCF <= PCFDash;
end

endmodule