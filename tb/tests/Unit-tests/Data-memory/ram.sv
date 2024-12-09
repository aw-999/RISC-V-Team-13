module ram #(parameter WA = 32, WAM = 17, WB = 8, WD = 32)(
    input logic clk,
    input logic [WA-1:0] Ad,
    input logic RamWrite,
    input logic [2:0] func3,
    input logic [WD-1:0] DIn,
    output logic [WD-1:0] DOut
);

logic [WB-1:0] RamArray [2**WAM-1:0]; // stored in byte
logic [WAM-1:0] AdM; // reduced in size, 2**32 is too large to simulate

logic [WD-1:0] show; // used for testing

initial begin
    $readmemh("triangle.mem", RamArray);
end;

always_comb begin 
    AdM = Ad[WAM-1:0];
    case (func3) 
        3'b000: DOut = {{24{RamArray[AdM][WB-1]}},RamArray[AdM]}; // lb
        3'b001: DOut = {{16{RamArray[AdM][WB-1]}},RamArray[AdM], RamArray[AdM+1]}; // lh
        3'b010: DOut = {RamArray[AdM], RamArray[AdM+1], RamArray[AdM+2], RamArray[AdM+3]}; // lw
        3'b100: DOut = {{24'b0},RamArray[AdM]}; // lbu
        3'b101: DOut = {{16'b0},RamArray[AdM], RamArray[AdM+1]}; // lhu
        default: DOut = {RamArray[AdM], RamArray[AdM+1], RamArray[AdM+2], RamArray[AdM+3]}; // lw
    endcase
end

always_ff@(posedge clk)
    if (RamWrite) 
    begin
        if (func3[1:0] == 2'b10)
        begin
            RamArray[AdM] <= DIn[WD-1:WD-8];
            RamArray[AdM+1] <= DIn[WD-9:WD-16];
            RamArray[AdM+2] <= DIn[WD-17:WD-24];
            RamArray[AdM+3] <= DIn[WD-25:0];
        end
        else if (func3[1:0] == 2'b01)
        begin
            RamArray[AdM] <= DIn[WD-17:WD-24];
            RamArray[AdM+1] <= DIn[WD-25:0];
        end
        else if (func3[1:0] == 2'b00) RamArray[AdM] <= DIn[WD-25:0];
    end

assign show = {RamArray[16], RamArray[17], RamArray[18], RamArray[19]};

endmodule
