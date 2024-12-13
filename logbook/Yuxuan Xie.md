# Contents
- 1 Writing and testing for cache
- 2 testing for PC
# 2. Design for cache
Initial planning of cache
Size ：256 bytes
4 Ways
8 Sets
32 blocks
<img src="./../images/cache_4ways.png">
### 2.1 L1 cache
The initial design of cache only contains L1 cache and L2 cache which stores the recently used data. And we decide to use 4 ways to store the data which stores larger amount of data to avoid the miss condition. but in the case where some data must be replaced it selects the last used way using a shift register. Using 4 ways decrease the miss rate of the instructions, while a set contains more blocks. And we need to use the FSM to control the work of cache. 
### 2.2 The state of L1 cache
<img src="./../images/StateDiagram_4ways.png" width = 200 height = 200>
The state machine is used, because we need it to implement different operations when there are many conditions of cache. The initial design contains 4 stages: Tag, write, allocate output. The Stage Tag is used to check whether the memory is hit. If not hit, the next stage is allocate, to add the missed data to the cache, then the data will be found in cache if the data is needed. When it is hit, if the instruction is load, the next stage is output, else if the instruction is store, the next stage is write.

```C++
case (current_state)
        TAG: begin
            cache_hit = cache_hit_detect(tag, cache_arr[set_index], degree_index);

            if (cpu_data_in.Valid) begin
                if (cache_hit) begin
                    if (cpu_data_in.Wen) begin
                        next_state = WRITE_THROUGH;
                    end else begin
                        next_state = OUTPUT;
                    end
                end else begin
                    degree_index = last_used_shift_reg[DEGREES-1];
                    next_state = ALLOCATE;
                end
            end
        end

        WRITE_THROUGH: begin
            cache_arr[degree_index][set_index].Data[(byte_offset+1)*8-1 -: 8] = cpu_data_in.ByteData;
            next_state = OUTPUT;
        end

        OUTPUT: begin
            cpu_data_out = '{Ready: 1'b1, ByteOut: cache_arr[degree_index][set_index].Data[(byte_offset+1)*8-1 -: 8]};
            update_shift_reg(degree_index, last_used_shift_reg);
            next_state = TAG;
        end

        ALLOCATE: begin
            cache_arr[degree_index][set_index] = '{Valid: 1'b1, Dirty: 1'b0, Tag: tag, Data: 0};
            next_state = TAG;
        end
    endcase
```
