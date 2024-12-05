`define UPD_SHIFT_REG (shift_register, new_value) 
  for (int i = 1; i < DEGREES; i++) begin
    shift_register[i] <= shift_register[i-1];
  end
  shift_register[0] <= new_value;


`define WRITE(CACHE_BLOCK, OFFSET, DATA)
	case (OFFSET)
		4'b0000: CACHE_BLOCK[7:0] = DATA; 
		4'b0001: CACHE_BLOCK[15:8] = DATA; 
		4'b0010: CACHE_BLOCK[23:16] = DATA; 
		4'b0011: CACHE_BLOCK[31:24] = DATA; 
		4'b0100: CACHE_BLOCK[39:32] = DATA; 
		4'b0101: CACHE_BLOCK[47:40] = DATA;
		4'b0110: CACHE_BLOCK[55:48] = DATA;
		4'b0111: CACHE_BLOCK[63:56] = DATA;
		4'b1000: CACHE_BLOCK[71:64] = DATA;
		4'b1001: CACHE_BLOCK[79:72] = DATA;
		4'b1010: CACHE_BLOCK[87:80] = DATA;
		4'b1011: CACHE_BLOCK[95:88] = DATA;
		4'b1100: CACHE_BLOCK[103:96] = DATA;
		4'b1101: CACHE_BLOCK[111:104] = DATA;
		4'b1110: CACHE_BLOCK[119:112] = DATA;
		4'b1111: CACHE_BLOCK[127:120] = DATA;
	endcase



module L1cache #(
    parameter DEGREES = 4,
    parameter SETNUM = 16,
    parameter BYTE_ADDR_BITS = 16,
    parameter TAGSIZE = 32 - $clog2(SETNUM) - BYTE_ADDR_BITS

) (
    input logic clk_i,
    input L1DataIn_t cpu_data_in,
    output L1DataOut_t cpu_data_out
);


typedef enum {TAG, ALLOCATE, WRITE, OUTPUT} cache_state;

logic 			                  cache_hit;

logic [$clog2(DEGREES)-1:0]    degree_index;
logic [$clog2(SET_NUM)-1:0] 	  set_index;
logic [BYTE_ADDR_BITS-1:0]		byte_offset;
logic [TAG_SIZE-1:0] 	                tag;

cache_state	current_state;
cache_state	next_state;

cache_entry [SETNUM-1:0] cache_arr[(DEGREES)-1:0];
logic [$clog2(DEGREES)-1:0] last_used_shift_reg[DEGREES-1:0];

initial begin
	 
  for (int i = 0; i < DEGREES; i++) begin
      last_used_shift_reg[i] = i;
  end

	for (int i = 0; i < SETNUM; i++)
      for (int j = 0; j < DEGREES; j++)
        cache_arr[j][i].Valid = 1'b0;
	current_state = TAG;

end 

always_ff @(posedge clk_in) begin
	current_state <= next_state;
  if (degree_index != last_used_shift_reg[0])
    UPD_SHIFT_REG(last_used_shift_reg, degree_index);
end

always_comb begin 

	set_index = cpu_data_in.Addr[31-TAGSIZE:BYTE_ADDR_BITS]; 
	tag = cpu_data_in.Addr[31:32-TAGSIZE];
	byte_offset = cpu_data_in.Addr[BYTE_ADDR_BITS-1:0];
	
    case(current_state)

    TAG: begin

      if (cache_arr[0][set_index].Valid && cache_arr[0][set_index].Tag == tag) begin
        degree_index = 2'd0;
        cache_hit = 1'b1;
      end
      else if (cache_arr[1][set_index].Valid && cache_arr[1][set_index].Tag == tag) begin
        degree_index = 2'd1;
        cache_hit = 1'b1;
      end
      else if (cache_arr[2][set_index].Valid && cache_arr[2][set_index].Tag == tag) begin
        degree_index = 2'd2;
        cache_hit = 1'b1;
      end
      else if (cache_arr[3][set_index].Valid && cache_arr[3][set_index].Tag == tag) begin
        degree_index = 2'd3;
        cache_hit = 1'b1;
      end
      else
        cache_hit = 1'b0;


      if (cpu_data_in.Valid && cache_hit) begin
        if (cpu_data_in.Wen) begin
          next_state = WRITE;
        end
        else begin
          next_state = OUTPUT;
        end
      end
      else if (cpu_data_in.Valid) begin 
        degree_index = last_used_shift_reg[DEGREES-1];
        next_state = ALLOCATE;
      end
      cpu_data_out.Ready = 1'b0;
    end

    WRITE_THROUGH: begin
      WRITE(cache_arr[degree_index][set_index].Data, byte_offset, cpu_data_in.ByteData);
      next_state = OUTPUT;
      cpu_data_out.Ready = 1'b0;
    end

    OUTPUT: begin
      cpu_data_out.Ready = 1'b1;
      next_state = TAG;`
      degree_index = last_used_shift_reg[0];
    end
	endcase
end


endmodule
