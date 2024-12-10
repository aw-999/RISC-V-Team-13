module DataMemory #(parameter WA = 32, WAM = 20, WB = 8, WD = 32)(
    input logic clk,
    input logic [WA-1:0] AdDM,
    input logic DMwrite,
    input logic [2:0] func3,
    input logic [WD-1:0] DInDM,
    output logic [WD-1:0] DOutDM
);

logic [WB-1:0] RamArray [2**WAM-1:0]; // stored in byte
logic [WAM-1:0] Ad; // reduced in size, 2**32 is too large to simulate

logic [WD-1:0] show; // used for testing

initial begin
    $readmemh("Zgaussian.mem", RamArray, 20'h10000);
end;

always_comb begin 
    Ad = AdDM[WAM-1:0];
    case (func3) 
        3'b000: DOutDM = {{24{RamArray[Ad][WB-1]}},RamArray[Ad]}; // lb
        3'b001: DOutDM = {{16{RamArray[Ad+1][WB-1]}},RamArray[Ad+1], RamArray[Ad]}; // lh
        3'b010: DOutDM = {RamArray[Ad+3], RamArray[Ad+2], RamArray[Ad+1], RamArray[Ad]}; // lw
        3'b100: DOutDM = {{24'b0},RamArray[Ad]}; // lbu
        3'b101: DOutDM = {{16'b0},RamArray[Ad+1], RamArray[Ad]}; // lhu
        default: DOutDM = {RamArray[Ad+3], RamArray[Ad+2], RamArray[Ad+1], RamArray[Ad]}; // lw
    endcase
end

always_ff@(posedge clk)
    if (DMwrite) 
    begin
        if (func3[1:0] == 2'b10)
        begin
            RamArray[Ad] <= DInDM[WD-25:0];
            RamArray[Ad+1] <= DInDM[WD-17:WD-24];
            RamArray[Ad+2] <= DInDM[WD-9:WD-16];
            RamArray[Ad+3] <= DInDM[WD-1:WD-8];
        end
        else if (func3[1:0] == 2'b01)
        begin
            RamArray[Ad] <= DInDM[WD-25:0];
            RamArray[Ad+1] <= DInDM[WD-17:WD-24];
        end
        else if (func3[1:0] == 2'b00) RamArray[Ad] <= DInDM[WD-25:0];
    end

assign show = {RamArray[20'h10003], RamArray[20'h10002], RamArray[20'h10001], RamArray[20'h10000]};

endmodule


