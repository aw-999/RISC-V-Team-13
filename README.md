# RISC-V-Team-13 Team Statement


## Team Progress 

Currently, we have implemented a fully verified pipelined version with Hazard Detection of the RISC-V processor, this is complete with implementations for every RISCV32I base instruction. 

## Team Contribution
o = Lead Contributor
x = Partial Contributor

### Single Cycle Processor

|                                     | Arjun | Dominik | Haiyi | Jerry | Peter |
| ----------------------------------- | ----- | ------- | ----- | ----- | ----- |
| Program Counter, Instruction Memory | x     |         |       | o     |       |
| PCsrc, PCtarget, PC add4 Muxes      | x     |         |       | o     |       |
| Regfile                             | x     |         |       | o     |       |
| ALU and related mux                 | o     | x       |       | x     |       |
| Control Unit                        | o     | x       |       |       |       |
| ALUDecode Unit                      | x     | o       |       |       |       |
| Data Memory                         | o     |         |       | x     |       |
| Writeback mux                       | o     | x       |       |       |       |
| Sign Extend                         | x     |         |       | o     |       |
| Top Module                          | x     | o       |       |       |       |
| Top Module Debugging                | o     |         |       |       |       |
| F1 Assembly Code                    |       |         | o     |       |       |
| F1 Testbench                        |       |         | o     |       |       |
| Overall Debugging Across Modules    | o     |         |       |       |       |
| Test Programs (pdf testbench)       | o     |         |       |       |       |
|                                     |       |         |       |       |       |


## Pipelined Processor + Hazard Detection

|                                    | Arjun | Dominik | Haiyi | Jerry | Peter |
| ---------------------------------- | ----- | ------- | ----- | ----- | ----- |
| Pipelined Flip Flops               |       | o       |       |       |       |
| Hazard Unit                        |       | o       |       |       |       |
| Hazard Muxes                       |       | o       |       |       |       |
| Modified Top module                |       | o       |       |       |       |
| Debugging Top module               | x     | o       |       |       |       |
| Redesign Regfile                   |       | o       |       |       |       |
| Redesign Muxes                     |       | o       |       |       |       |
| Redesign Control Unit              | x     | o       |       |       |       |
| Redesign ALU                       |       | o       |       |       |       |
| Redesign Data Memory               |       | o       |       |       |       |
| Verification of modules via Vbuddy | o     |         |       |       |       |
| Unit Testing                       | o     |         |       |       |       |

## Cache

|                                | Arjun | Dominik | Haiyi | Jerry | Peter |
| ------------------------------ | ----- | ------- | ----- | ----- | ----- |
| main memory                    |       |         |       |       |       |
| cachemux                       |       |         |       |       |       |
| 2-way cache                    |       |         |       |       |       |
|                                |       |         |       |       |       |
|                                |       |         |       |       |       |
| 4-way cache layer 1 (temporal) |       |         |       |       |       |
| 4-way cache bridge (untested)  |       |         |       |       |       |
|                                |       |         |       |       |       |
|                                |       |         |       |       |       |
