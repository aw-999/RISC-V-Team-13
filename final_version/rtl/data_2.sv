module data_2#(
    parameter WD = 32, // WordData width
    parameter WA = 32, // WordAddress width
    parameter WAM = 17,      // Addressable memory depth
    parameter WB = 8        // Byte width
)(
    input  logic                  clk,          // Clock input
    input  logic                  memwriteM,          // Write Enable signal
    input logic [2:0] memctrlM,         //write data formerly DIn
    input  logic [WA-1:0] aluresultM,           // Address input
    input  logic [WD-1:0] writedataM,          // Write Data input
    input logic memreadM,                       //1 -- load 0 -- store
    
    output logic [WD-1:0] readdataM           // Read Data output
);

    logic [WB-1:0] RamArray [2**WAM-1:0]; // Stored as bytes
    

  initial begin
    $readmemh("data.hex", RamArray, 32'h10000);
end;

always_comb begin
    if(memreadM) begin
        if(memctrlM == 3'b011) begin
            readdataM = {24'b0, RamArray[aluresultM[17:0]]};
        end

        else begin
            readdataM = {
                RamArray[{aluresultM[17:2], 2'b11}],
                RamArray[{aluresultM[17:2], 2'b10}],
                RamArray[{aluresultM[17:2], 2'b01}],
                RamArray[{aluresultM[17:2], 2'b00}]
            };
        end
    end
        else begin
            readdataM = 32'b0;
        end
end

always_ff @(posedge clk) begin
    if(memwriteM && memctrlM == 3'b010) begin
        RamArray[aluresultM[17:0]] <= writedataM[7:0];
    end
    else if (memwriteM) begin
        RamArray[{aluresultM[17:2], 2'b00}] <= writedataM[7:0];
        RamArray[{aluresultM[17:2], 2'b01}] <= writedataM[15:8];
        RamArray[{aluresultM[17:2], 2'b10}] <= writedataM[23:16];
        RamArray[{aluresultM[17:2], 2'b11}] <= writedataM[31:24];
    end
end

endmodule
