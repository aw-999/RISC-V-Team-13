# Dominik Hagmann Personal Statement

<center> <img src= "/Users/Dominik.hagmann/Documents/iac/lab0-devtools/autumn/workspace/RISC-V-Team-13-1/images/Screenshot 2024-12-13 at 17.24.41.png" width = 200 length = 200>

## Pipeline

From the start of the porject, I took over the work on implementing a 5-stage pipelined processor and hazard detection. I began by referencing the provided diagram since the single-cycle CPU was still under development at that point. As progress was made on the single-cycle CPU, I started working on a new top module that included the pipelined modules and changed variable names to keep consistency. 

The pipelined processor is split into 5 stages: Fetch, Decode, Execute, Memory and Write Back. Each pipeline stage was implemented using flip-flop gates to transition data and control signals to the next stage while mainting proper timing. For example in the Fetch stage, the wire pcF transitions to pcD in the Decode stage, allowing the Fetched instruction to be used while ensuring synchronization with other pipeline operations. 

<center> <img src=____________ = width = 200 length = 200>

flip flop of pcF transitioning to pcD in pcf.sv


## Hazard Detection

While implementing the hazard unit, some changes were mafe compared to the diagram seen above. Instead of using pcsrcE for the logic to produce flushED I used flagE and jumpE and used OR logic to produce the flushED signal. For the stall logic, I used memreadE instead of resultsrcE to generate stallFD signal. The modules where I used stall and flush was similar as in the diagram: pcf.sv and pcreg.sv but also incorporated stall in control.sv for the output signals memwriteD, memreadD and regwriteD. Whilst I added the flush signal to pcf.sv and pcd.sv.

Additionally I added to muliplexers, mux_srcaE and mux_srcbE, that resolved hoazards by forwarding results from later pipeline stages to the ALU inputs. The logic used for the two select inputs (forwardaE and forwardbE) of these multiplexers was by using register write, read data and register sources. The logic works by checking the source registers in the execute stage to determine if forwarding of either data from the memory or writeback stage is required. 



Logic that is being used in the hazard unit for the forwardaE output

## Top Module

To make implementation of the 5-stage pipelined processor and hazard unit easier, I made a new top file and ensures that variable naming throughout all the modules and top module stayed consistnt. I used identifiers corresponding to the pipeline stages, such as F (Fetch), D (Decode), E (Execute), M (Memory) and W (Write Back). This followed the same naming convention as in the diagram provided above allowing me with comparing and tracing with the diagram and my top module.

## Debugging

I focused primarily on debugging the complete form of the 5-stage pipelined processor and hazard unit. I identified many conflicts with the logic in the single-cycle not working in the pipelined processor. This led me to make several modifications to existing modules. For example I redesigned the alu to use 5 bit aluctrl instead of 4 bit aluctrl due to needing to implement the lui instuction, aluresultM = srcbE. Furthermore, i had to change the logic in the control unit to have outputs jumpD and branchD instead of pcsrcD so that they can be used in hazard unit. This in turn also required me to make a new module known as gate_pcsrcE that produced pcsrcE instead of in control unit.


## Conclusion

