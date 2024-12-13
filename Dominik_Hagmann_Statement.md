# Dominik Hagmann Personal Statement

<center> <img src= "images/Screenshot 2024-12-13 at 17.24.41.png" width = 800 length = 800>

Image of the 5-stage Pipelined processor with Hazard Detection that I used as reference

## Pipeline

From the start of the porject, I took over the work on implementing a 5-stage pipelined processor and hazard detection. I began by referencing the provided diagram since the single-cycle CPU was still under development at that point. As progress was made on the single-cycle CPU, I started working on a new top module that included the pipelined modules and changed variable names to keep consistency. 

The pipelined processor is split into 5 stages: Fetch, Decode, Execute, Memory and Write Back. Each pipeline stage was implemented using flip-flop gates to transition data and control signals to the next stage while mainting proper timing. For example in the Fetch stage, the wire pcF transitions to pcD in the Decode stage, allowing the Fetched instruction to be used while ensuring synchronization with other pipeline operations. 

```
    
    else if (!stallFD) begin
        instrD <= instrF;
        pcD <= pcF;
        pcplus4D <= pcplus4F;
    end

```

Section of flip-flop of transition from Fetch to Decode stage


## Hazard Detection

While implementing the hazard unit, some changes were mafe compared to the diagram seen above. Instead of using pcsrcE for the logic to produce flushED I used flagE and jumpE and used OR logic to produce the flushED signal. For the stall logic, I used memreadE instead of resultsrcE to generate stallFD signal. The modules where I used stall and flush was similar as in the diagram: pcf.sv and pcreg.sv but also incorporated stall in control.sv for the output signals memwriteD, memreadD and regwriteD. Whilst I added the flush signal to pcf.sv and pcd.sv.

Additionally I added to muliplexers, mux_srcaE and mux_srcbE, that resolved hoazards by forwarding results from later pipeline stages to the ALU inputs. The logic used for the two select inputs (forwardaE and forwardbE) of these multiplexers was by using register write, read data and register sources. The logic works by checking the source registers in the execute stage to determine if forwarding of either data from the memory or writeback stage is required. 

```
        if (((rs1E == rdM) && regwriteM) && (rs1E != 5'b00000)) begin // Forward from Memory stage
            forwardaE = 2'b10;
        end

        else if (((rs1E == rdW) && regwriteW) && (rs1E != 5'b00000)) begin // Forward from Writeback stage
            forwardaE = 2'b01;
        end

        else begin
            forwardaE = 2'b00;
        end
```

Logic that is being used in the hazard unit for the forwardaE output

## Top Module

To make implementation of the 5-stage pipelined processor and hazard unit easier, I made a new top file and ensures that variable naming throughout all the modules and top module stayed consistnt. I used identifiers corresponding to the pipeline stages, such as F (Fetch), D (Decode), E (Execute), M (Memory) and W (Write Back). This followed the same naming convention as in the diagram provided above allowing me with comparing and tracing with the diagram and my top module.

```
mux_pcsrc mux_pcsrc (
    .pcplus4F (pcplus4F),
    .pctargetE (pctargetE),
    .pcsrcE (pcsrcE),

    .pcnextF (pcnextF)
);
```
section of top indicating how I kept naming convention consistent throughout the modules



## Debugging

I focused primarily on debugging the complete form of the 5-stage pipelined processor and hazard unit. I identified many conflicts with the logic in the single-cycle not working in the pipelined processor. This led me to make several modifications to existing modules. For example I redesigned the alu to use 5 bit aluctrl instead of 4 bit aluctrl due to needing to implement the lui instuction, aluresultM = srcbE. Furthermore, I had to change the logic in the control unit to have outputs jumpD and branchD instead of pcsrcD so that they can be used in hazard unit. This in turn also required me to make a new module known as gate_pcsrcE that produced pcsrcE instead of in control unit.

```
    case(opcodeD)
        7'b1100011: branchD = 1'b1;     //b - type
        7'b1100111: jumpD = 1'b1;  //jalr
        7'b1101111: jumpD = 1'b1;  //jal - might need to look into that later
        default: begin
        branchD = 1'b0;
        jumpD = 1'b0;
        end
    endcase
```

Furthermore I redesigned the data memory as the single-cycle data memory used funct3 to distinguish between load and store instructions. I introduced two new variables in control unit, memctrl and memread, which are both pipelined and use opcode and funct3 to help determine which store and load instruction. Where memctrl is 3 bits long and used to determine which type of instruction and memread is 1 bit and indicates if it is a load (high) or store (low) instruction.

```
    always_comb begin
        if(memreadM) begin 
            if(memctrlM == 3'b011) begin
                readdataM = {24'b0, RamArray[aluresultM[17:0]]};
            end
```
Part of data memory indicating change where using memread and memctrl to indicate if its a load or store and if its a load byte unsigned instruction

During debugging for test cases 3, 4, and 5, I discovered that the register file from the single-cycle CPU was causing unexpected behavior. The issue was that the register file was set to update on the rising edge of the clock cycle (posedge clk). This caused the outputs (RD1D and RD2D) to be overwritten prematurely, leading to incorrect data being forwarded to subsequent stages. By modifying the register file to update on the falling edge of the clock cycle (negedge clk), I ensured that the outputs were no longer overwritten, resolving the issue and allowing the pipeline to function correctly. 

```
always_ff @(negedge clk)
```

change in register file that fixed issues with testcases 3, 4 and 5

## Conclusion

In conclusion I thoroughly enjoyed working on this project especially working out how to change the logic of the single-cycle to fit the pipelined and hazard dection version of the processor. This experience provided me with invaluable insights into RISC-V, SystemVerilog and debugging. Unfortunately I was not able to work on the cache part of the project and we ran out of time to finish the 4-way set associative cache, which I would have enjoyed working on.

Reflecting back on my process with implementing pipelining and hazard detection I believe it would have been more beneficial to have contributed on the single-cycle CPU first before moving onto pipelining as I would of had a better understanding of those modules and better decisions during building of the single-cycle CPU would have been chosen to complement pipelining and hazard detection. This would of then allowed me to work on cache and also I believe able to reach a better understanding of the CPU that my group and I built.
 
