# RISC-V-Team-13 Team Statement


## Team Progress 

We have created a Pipelined, 2 way associative cache with hazard detection which has been fully verified. 

Versions implemented:
Single Cycle RISC-V
5 Stage Pipelined RISC-V
5 Stage Pipelined RISC-V with 2 Way Associative Cache

Each stage passed all of the test programs provided

We were in the process of implementing a 4-way cache as well but this was still under testing


## Team workflow

We arranged weekly team meetings where progress was shared and any problems / future goals were discussed.

If any of us required any additional clarification, we also communicated regularly on or WhatsApp chat

Initially we allocated roles for each team member 

## Team Contribution
o = Lead Contributor
x = Partial Contributor

### Single Cycle Processor

|                                     | Arjun | Dominik | Haiyi | Jerry | Peter |
| ----------------------------------- | ----- | ------- | ----- | ----- | ----- |
| Program Counter, Instruction Memory | x     |         |       | o     | x     |
| PCsrc, PCtarget, PC add4 Muxes      | x     |         |       | o     | x     |
| Regfile                             | x     |         |       | o     |       |
| ALU and related mux                 | o     | x       | x     | x     |       |
| Control Unit                        | o     | x       |       |       |       |
| ALUDecode Unit                      | x     | o       | x     |       |       |
| Data Memory                         | o     |         | x     | x     |       |
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

|                                      | Arjun | Dominik | Haiyi | Jerry | Peter |
| ------------------------------------ | ----- | ------- | ----- | ----- | ----- |
| Pipelined Flip Flops                 |       | o       |       |       |       |
| Hazard Unit                          |       | o       |       |       |       |
| Hazard Muxes                         |       | o       |       |       |       |
| Modified Top module                  |       | o       |       |       |       |
| Debugging Top module                 | x     | o       |       |       |       |
| Redesign Regfile                     |       | o       |       |       |       |
| Redesign Muxes                       |       | o       |       |       |       |
| Redesign Control Unit                | x     | o       |       |       |       |
| Redesign ALU                         |       | o       |       |       |       |
| Redesign Data Memory                 |       | o       |       |       |       |
| Verification of processor via Vbuddy | o     |         |       |       |       |
| Unit Testing                         | o     |         |       |       |       |

## Cache

|                                | Arjun | Dominik | Haiyi | Jerry | Peter |
| ------------------------------ | ----- | ------- | ----- | ----- | ----- |
| main memory                    |       |         |       |       |       |
| cachemux                       |       |         |       |       |       |
| 2-way cache                    |       |         |       |       |       |
| cache debugging                |       |         |       |       |       |
| integration with pipelined     |       |         |       |       |       |
| 4-way cache layer 1 (temporal) |       |         |       |       |       |
| 4-way cache bridge (untested)  |       |         |       |       |       |
|                                |       |         |       |       |       |
|                                |       |         |       |       |       |
