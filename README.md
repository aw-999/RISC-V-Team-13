# RISC-V-Team-13 Team Statement


# Testing our processor

We have multiple implementations for our RISC-V processor in separate branches, in the;

main branch in the rtl folder, we have the full verified single cycle RISC-V processor

Pipelined branch - rtl folder , fully verified 5 stage pipelined RISC-V Processor

pipeline_cache2  branch - rtl folder -  2 way set assocative cache 


# How to use

TO TEST 5 TEST PROGRAMS: open rtl folder in branch check datamemory has file "data.hex" , check instruction memory has file "program.hex" to run the 5 test programs, then do `bash ./doit.sh` or `bash ./doit_nonmac.sh` for mac / non mac.
NOTE: THIS .SH FILE NAME MAY NOT BE CONSISTENT ACROSS 3 VERSIONS

TO TEST F1 LIGHTS:

change to rtl folder
put "F1assembly.mem" in instruction memory. run `bash ./F1.sh` shell script. 
Connect Vbuddy



TO PLOT PDF:

change to rtl folder
change instruction memory file to "pdf.hex"
change data memory file to "gaussian.mem"  -- CHANGE FOR DIFFERENT DISTRIBUTION.
run `bash ./pdf.sh`



## Evidence

https://www.youtube.com/watch?v=lkD1R1R1Z-A -- Gaussian cached processor video

https://www.youtube.com/watch?v=dQPJHsPt7UY -- Sine cached processor video

https://www.youtube.com/watch?v=WJTLWmlUPOQ -- Triangle cached processor Video

https://www.youtube.com/watch?v=BamRy1hRapA -- Noisy cached Porcessor video

https://www.youtube.com/watch?v=GsUzAgGpNCY -- f1 assembly working with Cache video





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

Initially we allocated roles for each team member. 

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
| main memory                    |       |         | x     |       | x     |
| cachemux                       |       |         | x     |       | x     |
| 2-way cache                    |       |         | x     |       | x     |
| cache debugging                |       |         | o     |       | x     |
| integration with pipelined     |       |         | o     |       | x     |
| 4-way cache layer 1 (temporal) |       |         | x     |       | o     |
| 4-way cache bridge (untested)  |       |         | x     |       | o     |
|                                |       |         |       |       |       |
|                                |       |         |       |       |       |
