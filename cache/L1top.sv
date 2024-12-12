module CacheMemoryTop #(
    parameter WA = 32,       // Address width
    parameter WD = 32,       // Word width
    parameter BLOCKSIZE = 128, // Block width (128 bits for cache blocks)
    parameter BYTE_ADDR_BITS = 4 // Byte offset bits
)(
    input logic clk,
    input logic rst_n,

    // CPU interface
    input logic [WA-1:0] aluresultM,          // Word-level address
    input logic memwriteM,             // Word write enable
    // input logic RamRead,              // Word read enable (Valid bit)
    input logic [2:0] funct3M,          // Word-level operation selector
    input logic [WD-1:0] writedataM,         // Word-level data input
    output logic [WD-1:0] readdataM,       // Word-level data output
    output logic stall,               // Stall signal for the CPU

    // Debugging and monitoring signals (optional)
    output logic cache_hit,           // Indicates cache hit
    output logic cache_miss           // Indicates cache miss
);

// Internal signals for L1cache and RAM integration
logic RamRead,                       // Word read enable (Valid bit)
logic [31:0] mem_request_addr;       // Address to fetch data from memory
logic mem_read;                      // Memory read enable
logic memory_ready;                  // Memory data is ready
logic [BLOCKSIZE-1:0] memory_data;   // Data block from RAM
logic BlockReadEnable;               // Block read enable for RAM
logic BlockWriteEnable;              // Block write enable for RAM
logic [WA-1:0] BlockAddr;            // Block-level address for RAM
logic [BLOCKSIZE-1:0] BlockDataIn;   // Data input for block write
logic [BLOCKSIZE-1:0] BlockDataOut;  // Data output for block read
logic [6:0] opcode;                 // Opcode for cache operations

opcode = aluresultM[6:0];
if (opcode = 7'b0000011) begin
    RamRead = 1'b1;
end else begin
    RamRead = 1'b0;
end
// L1cache and RAM interface

// L1cache instantiation
L1cache #(
    .DEGREES(4),
    .SETNUM(64),
    .BYTE_ADDR_BITS(BYTE_ADDR_BITS),
    .BLOCKSIZE(BLOCKSIZE)
) cache (
    .clk_i(clk),
    .rst_n(rst_n),

    .cpu_data_in('{Valid: RamRead, Wen: RamWrite, Addr: Ad, Datain: DIn}),
    .cpu_data_out('{Ready: !stall, Dataout: DOut}),

    .mem_request_addr(mem_request_addr),
    .mem_read(mem_read),
    .memory_ready(memory_ready),
    .memory_data(memory_data)
);

// RAM instantiation
datamemory #(
    .WA(WA),
    .WAM(17), // Reduced address width for simulation
    .WB(8),   // Byte width
    .WD(WD),
    .BLOCKSIZE(BLOCKSIZE)
) ram (
    .clk(clk),

    // Word-level interface
    .aluresultM(aluresultM),
    .memwriteM(memwriteM),
    .funct3M(funct3M),
    .writedataM(writedataM),
    .readdataM(readdataM),

    // Block-level interface
    .BlockReadEnable(mem_read),
    .BlockWriteEnable(BlockWriteEnable),
    .BlockAddr(mem_request_addr),
    .BlockDataIn(BlockDataIn),
    .BlockDataOut(memory_data)
);

// Stall logic
assign stall = !memory_ready && mem_read;

// Cache monitoring signals
assign cache_hit = cache.cpu_data_out.Ready;
assign cache_miss = !cache_hit && mem_read;

endmodule
