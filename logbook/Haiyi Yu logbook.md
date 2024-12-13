## Personal Statement of Haiyi Yu

## Overview
* [F1 Program](#F1-program)
  * [F1 Assembly](#F1-assembly)
  * [Convert to mem](#convert-to-mem)
  * [F1 Testbench](#F1-Testbench)
  * [Trigger](#trigger)
  * [Test instructions](#test-instructions)
    *[Video](*Simulation-video)
* [Test and debug](#test-and-debug)
  * [Instruction Memory](#instruction-memory)
  * [ALU Decode](#alu-decode)
* [Cache](#cache)
  * [2-Way Associative Cache](#2-Way-Associative-Cache)
  * [4-Way Associative Cache](#4-way-associative-cache)
* [Data Memory](#datamemory)
* [Memory Mux](#memory-mux)
* [Reflections](#reflections)
  * [Step by Step](#step-by-step)
  * [Insufficient Consideration](#insufficient-consideration)
* [Skills acquired](#Skills-acquired)
  * [Technical skill](#technical-skill)
  * [Soft skill](#soft-skill)
  * [CPU Architecture](#cpu-architecture)
* [What's next](#What's-next)

___

## F1 Program

The F1 program mainly aims to show the F1 starting light resembling to the light counting at Lab 3 Finite State Machine. The assmebly code and testbench test the usage of the instructions like JAL and BEQ (memory excluded).

### F1 Assembly

### **Register Assignment**

Similar to the Lab3 finite state machine, all registers currently hold values used for F1 operation. Most values are pre-allocated during initialization for assembly purposes, while others are added later for delay adjustments.

#### **General Variables**
- **`a0`**: Represents F1 light status.
  - `0x1`: Only 1 light on.
  - `0x3`: 2 lights on.
  - `0xFF`: All 8 lights on.
- **`a1`**: Variable in the light delay module to count `a3` iterate time delay.

#### **Random Delay Variables**
- **`a2`**: Variable in LFSR to generate random delay value.
- **`a3`**: Similar to `a2`.
- **`a4`**: Random delay counter combined with `a3` to control the "all lights off" condition.

---

#### **Flags and Control Signals**
- **`s1`**: Flag value 1 with trigger to determine F1 light activation.
- **`s2`**: Value `0xFF` to indicate all 8 lights are on.
- **`s3`**: Determines light delay time.
- **`s4`**: Determines final light delay.
- **`t0`**: Trigger, controlled by `Vbdflag()`.

---

### **Initializating Code**
```systemverilog
// Initialize registers with predefined values for F1 operation and delay settings.
init:
    addi s1, zero, 0x1  // A flag to compare with trigger VbdFlag, activates F1 light when vbuddy button is pressed.
    addi s2, zero, 0xff // 0x1111 1111, representing the condition where all 8 lights are on.
    addi s3, zero, 0x4  // Determines how many times the timedelay module iterates, setting the delay between lights.
    addi a3, zero, 0x1  // Initial value for producing the LFSR random number, controlling the all lights off delay.
    addi s4, zero, 0x1  // Determines the final light delay.
```

Set up trigger and light delay module.

### **Reset module**
```systemverilog
rst:
    addi a0, zero, 0x0  // Reset all -- turn all lights off.
    addi a4, zero, 0x0  
    addi t0, zero, 0x0  // Set trigger back to 0, clearing the vbuddy button effect.
```

Reset the F1 light once random delay end (reset on).

### **Set up random delay**
```systemverilog
mainloop:
    beq  t0, s1, fsm    // FSM starts when vbdflag is on.
    srli a2, a3, 0x3    // LFSR -- generating a random delay value.
    andi a2, a2, 0x1
    xor  a2, a2, a3
    andi a2, a2, 0x1
    slli a3, a3, 0x1
    add  a3, a3, a2
    andi a3, a3, 0xf
    srli a3, a3, 0x1
    jal  ra, mainloop   // Loop.
```

Use LFSR to create a random delay for the light off time.

#### **Finite state machine **
```systemverilog
fsm:
    // Used to turn on F1 light one by one.
    jal  ra, lightdelay      // Add constant delay.
    slli t1, a0, 0x1    // Shift left temp bits.
    addi a0, t1, 0x1    // Add 1 to shifted temp bits.
    bne  a0, s2, fsm    // Loop only if not all lights are on.

lightdelay:
    // Iterate as a delay between each F1 light turning on.
    addi  a1, a1, 0x1   // Increment count.
    bne   a1, s3, lightdelay
    addi  a1, zero, 0x0 // Reset count.
    RET
```

FSM logic to turn on the red light one by one.

### **Lights off count down**

```systemverilog
increment:
    // Happens when all the 8 F1 lights are on -- random light-off stage.
    beq  a4, a3, rst
    jal  ra, finallightdelay      // Jump to counter.
    addi a4, a4, 0x1    // Increment delay.
    jal  ra, increment  // Run until delay finished.

finallightdelay:
    addi  a1, a1, 0x1   // Increment count.
    bne   a1, s4, finallightdelay
    addi  a1, zero, 0x0 // Reset count.
    RET
```

Delay logic when all the lights are on, phase to count down. 

---

The key lies in the LFSR and the FSM which accounts for the light up module and random lights-off delay module. The code is adjusted several times to match 1 second delay desired for each F1 ascending lights, and appropriate random delay in the final for better simulation. [(init commit version)](https://github.com/aw-999/RISC-V-Team-13/commit/d6f7ead49bdf516473128f3bbd3a86f0e4013206)As the project progressed the project is tested on Vbuddy rather than only gtkwave waveform simulation, which indicates a too large value generated by LFSR, and low increment speed to terminate random delay in the end. [(final commit version)](https://github.com/aw-999/RISC-V-Team-13/commit/78461b732c3f5abc11fad8f40e862d626207980f)

---

### Convert to mem

risc64 initiated at the start of the lab can help to translate assembly language to binary files.

#### Command:
```riscv64-unknown-elf-as -o F1assembly.o F1assembly.s```
```riscv64-unknown-elf-objcopy -O binary F1assembly.o F1assembly.bin```

#### binary-to-hexdecimal code
```python
with open('F1assembly.bin', 'rb') as binary_file:
    bytes = binary_file.read()

with open('F1assembly.mem', 'w') as mem_file:
    for i in range(0, len(bytes), 4):
        instruction = int.from_bytes(bytes[i:i+4], 'big')
        hex_instruction = f"{instruction:08x}"
        formatted_instruction = ' '.join(hex_instruction[j:j+2] for j in range(0, 8, 2))
        mem_file.write(formatted_instruction + '\n')
```

The file creates a F1assembly.mem in hexadecimal, which helps for waveform compare and understanding.

---

### F1 Testbench

#### Initialization
```systemverilog
// init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("F1test");
    vbdSetMode(1); // one-shot mode
    vbdBar(0);     

    top->clk = 0;
    top->rst = 0;
    top->trigger = 0;
```
#### Main testbench
```systemverilog
vbdCycle(simcyc);
        top->trigger = vbdFlag();
        vbdBar(top->a0 & 0xFF);
        vbdHex(4, (int(top->a0) >> 12) & 0xF);
        vbdHex(3, (int(top->a0) >> 8) & 0xF);
        vbdHex(2, (int(top->a0) >> 4) & 0xF);
        vbdHex(1, int(top->a0) & 0xF);
```
a0 is the data output from the CPU. a0 -- 0x0000... binary value, each 1 corresponds a red light turning on inside vbuddy.

---

### Trigger

#### Assembly
Trigger is needed for testing since it acts as a way of controlling the F1 program initialization. When ```trigger = 1``` instruction starts the Finite state machine. In the assembly we use `register[5]` which is `t0` to store this temporary bit as a flag to control FSM.
```systemverilog
mainloop:
    beq  t0, s1, fsm    // FSM starts when vbdflag is on.
```

#### Processor

Trigger is needed for assertion at the `top.module`, the `registerfile` at single cycle / pipelined / pipelined with cache.

`registerfile`:
```systemverilog 
always_ff @(negedge clk)
if (trigger) begin
        RegArr[5] <= 32'b1; 
end
```

Initial logic needed to store trigger `flag` value into `t0` as temporary storage. [(trigger logic for register)](https://github.com/aw-999/RISC-V-Team-13/commit/9f52035e230f8adf44a37396c3ec89b0f1824405)

Top module also requires the input logic wiring. [(wiring)](https://github.com/aw-999/RISC-V-Team-13/commit/cd34ed419d28204cf2708cc96eed52b25951203d)

#### FAQ

Q: Why trigger value is not asked to pass along inside pipelined version?

A: Since the trigger set ahead of / after time does not have influence on the loop created by F1 assembly code -- the loop only jumps as trigger is detected, trigger won't have any effect through the program and be set back to 0 in the end.

---

### Test instructions

* hint: also included inside test directory for clarification. *

* clone the repo ```git clone copied_link.com
* Move F1.sh F1test.cpp F1assembly.bin into the tested CPU

* Following check process needed if used on OTHER CPU
* Make sure the F1.sh uses the correct top module name, currently "main_top", they already match with the single cycle 
* Make sure F1test.cpp matches the name -- currently #include "Vmain_top.h", they already match with the single cycle 
* Check Vbuddy connection, if not move to test dir and type ```./attach_usb.sh```

```usbipd: info: Using WSL distribution 'Ubuntu-22.04' to attach; the device will be available in all WSL 2 distributions.
usbipd: info: Using IP address xxx.xx.xxx.x to reach the host.
```

* Change InstructionMemory.sv memory source to F1assembly.mem
* use ```source./F1.sh``` to start simulation

<br>

___

#### Simulatoin video

#F1:

https://github.com/aw-999/RISC-V-Team-13/blob/main/test/F1test.mp4
___

## Test and debug

The test and debug mainly due to our time arrangement as the F1program is under test with other tests which shall be done beforehead. Due to a process time difference some of the bugs are done and addressed as the F1 program is testing. The major problems lie in _three_ parts:

### Instruction memory problem

```systemverilog 
assign instrF = {RomArr[pcF], RomArr[pcF+1], RomArr[pcF+2], RomArr[pcF+3]}; //large endian array
```

The instruciton array is following a big endian type during the single-cycle-test at the beginning. Since the double transaction read from the riscv64 create a confusion between big endian and small endian. Small endian is done setting as `big` inside conversion python file.
[(fix large endian)](https://github.com/aw-999/RISC-V-Team-13/commit/05bc01df8ff55ab9405a8720c53b29dcce043afe)
```python
#from convert.py
instruction = int.from_bytes(bytes[i:i+4], 'big')
```

---

### ALU Decode

ALU is split into `alusrc.sv` `alu.sv` in the early version of the processor. `BEQ` instructions are found invalid as looked into `N1` and `N2` to generate `ALU` result. The problem goes to the ALUSRC selection logic missing in the end through the gtkwave checking.

[(op7 and alusrc logic fixed)](https://github.com/aw-999/RISC-V-Team-13/commit/83363cb16744ad93e786f9c6b2d215fb1160aa41)

picture needed for gtkwave here !

---

## Cache

This module is in charge of Yuxuan Xie and I. Yuxuan Xie created the base of 4-way associative cache in temporal locality in level 1 an 2 along with the brdige to hold them together. I added the left logic of block to support spatial locality inside datamemory (main memory) in branch Cache_Degree_4_Error.[(final debug and interface error)](https://github.com/aw-999/RISC-V-Team-13/commit/0e6652667b81a83b5dfe789c946c0dbe3bce508a)

However, due to the debug and wiring problem the cache, I rewrote the logic to 2-way associative cache for the pipelined version, which works for all the tests. 

---

picture here

This component consists of 3 parts in the final version of pipelined: `cache_2.sv`, `data_2.sv`, `memcache.sv`

- **`cache_2.sv:`**: a 2-way-associative cache with 8 sets
- **`data_2.sv:`** datamemory with cache
- **`memcache_2.sv:`** multiplexer to choose between memory and cache dataoutput, controlled by hit signal

---

### 2-Way Associative Cache

picture here

#### Parameters

| Parameter      | Value/Description                                           |
|----------------|-------------------------------------------------------------|
| `TAGSIZE`      | Derived from `32 - clog2(SETNUM)`. Represents the size of the tag field in the cache. |
| `SETNUM`       | Number of sets in the cache (default: 8).                   |
| `DEGREE`       | Degree of associativity (default: 2-way associative).       |

---

- **`SETNUM`**: Determines the number of rows in the cache table.
- **`DEGREE`**: Represents the number of columns (ways) in the cache table for each set.
- **`TAG`**: Used to identify if a memory block is present in the cache.
- **`DATA`**: The actual data stored in the cache line.
- **`VALID`**: Indicates if the cache line contains valid data.

---

#### Key logic explanation

1. **LRU (Least Recently Used)**
   - Tracks the usage pattern of ways in a set to determine which way to replace on a miss.
   - Can be done by 1 bit since only 2 ways (degrees) inside one set: 
     - `0`: Way 0 is least recently used.
     - `1`: Way 1 is least recently used.

2. **Cache Hit**
   - A hit occurs when:
     ```verilog
     valid[set_index][way] && (tag[set_index][way] == Tag_in)
     ```
   - The corresponding `DATA` is outputted.

3. **Cache Miss**
   - On a miss:
     - The LRU way is selected.
     - The cache line is updated with the tag and data fetched from memory.
     ```systemverilog
     if (LoadM && !hit) begin
      lru[set_index] <= !lru[set_index];                   // Toggle LRU for the set
      way_sel = lru[set_index] ? 1'b0 : 1'b1;              // Select the LRU way for replacement
      valid[set_index][way_sel] <= 1'b1;                   // Mark the line as valid
      tag[set_index][way_sel] <= Tag_in;                 // Update the tag
      data[set_index][way_sel] <= memIn;                   // Load data from memory
    end
    ```

4. **Write Operations**
   - Writes are handled in the selected way (based on `LRU`) and update the cache memory:
     ```systemverilog
     data[set_index][way_sel][7:0] <= dataIn[7:0];
     ```
---

#### Tested adjustment history
Change memreadM to control load & store signal, in order to avoid logic problem in wiring to pipelined.[(logic change)](https://github.com/aw-999/RISC-V-Team-13/commit/dbf9af2a7d86ff3954418f317765b38a4b43ef96)

The final test inside pdf got close but unequal result for a0 output. The problem is suspected for memwriteM can't be acted as the load/store signal, which prompted us to add load / store signal passing along from the CPU decode. This helps match the PDF result output. All 5 tests passed.
[(add load / store signal)](https://github.com/aw-999/RISC-V-Team-13/commit/1049ce75a54e24f842c3d5b4fe508fcc3856af87)

---

### 4-Way Associative Cache

#### Block fetch logic inside memory and spatial locality
Yuxuan Xie wrote most of the logbook for this part and I would like to explain how the block fetech is added inside the datamemory.

[(wiring logic and block update)](https://github.com/aw-999/RISC-V-Team-13/commit/25bcfe4e0a221cf3fd95cb0df1accdb1d6823d11)
 
```systemverilog
always_comb begin
    if (BlockReadEnable) begin
        BlockDataOut = {RamArray[BlockAddr+15], RamArray[BlockAddr+14], RamArray[BlockAddr+13], RamArray[BlockAddr+12],
                        RamArray[BlockAddr+11], RamArray[BlockAddr+10], RamArray[BlockAddr+9], RamArray[BlockAddr+8],
                        RamArray[BlockAddr+7], RamArray[BlockAddr+6], RamArray[BlockAddr+5], RamArray[BlockAddr+4],
                        RamArray[BlockAddr+3], RamArray[BlockAddr+2], RamArray[BlockAddr+1], RamArray[BlockAddr]};
    end else begin
        BlockDataOut = {BLOCKSIZE{1'b0}}; // Default to zero if not enabled
    end
end
```

A stall is triggered when the CPU encounters a cache miss, requiring data to be fetched from the main memory.

Each time a memory fetch occurs, the cache receives not just the requested data but also the surrounding ones, as the block size is 128 bits. This improves spatial locality and reduces the overall miss rate.

---

### Data memory
```systemverilog
data_2 datamemory (

    .clk (clk),
    .aluresultM (aluresultM[17:0]), 
    .memwriteM (memwriteM), 
    .memctrlM (memctrlM),
    .memreadM (memreadM),
    .writedataM (writedataM), 

    .readdataM (memoryout) //wiring
);

cache_2 cache_2 (
    .addressIn (aluresultM),
    .dataIn (writedataM),
    .LoadM (loadM),
    .storeM (storeM),
    .memwriteM (memwriteM),
    .clk (clk),
    .memIn (memoryout), //wiring

    .Dataout (Cacheout),
    .hit (hit)
);
```

Output data logic goes to cache also at `top.sv` as a change.

---

### Memory mux

```systemverilog
top.sv:
memcache memcache (
    .hit (hit),
    .Cachein (Cacheout),
    .Memoryin (memoryout),

    .Cacheout (readdataM)
);
```
```wiring logic```

```systemverilog
    always_comb begin
        if (hit) begin
            Cacheout = Cachein;
        end else begin
            Cacheout = Memoryin;
        end
    end
```
hit index selects whether the data is taken from memory or cache.

---

### Reflections

#### Step by Step
The issue with the 4-way associative cache remains unresolved as noted in the logbook. A more gradual approach to learning cache design might be more effective. Starting with the logic of a direct-mapped cache, progressing to a 2-way associative cache, and finally moving to a 4-way associative cache allows for a better understanding of the underlying principles. Jumping directly to a 4-way associative cache makes the wiring more complex, especially when the pipeline has not been thoroughly tested. Taking a step-by-step approach in the future could help solidify the foundational concepts and ensure a robust implementation.

#### Insufficient Consideration
Referring back to cache.sv, it is evident that no stall is needed for the cache to operate. This is because the execution latency is ignored in the virtual CPU playground.

In a real-world scenario, inputs from the cache and memory outputs would not enter the logic simultaneously due to execution latency. While this does not cause issues in the virtual CPU environment, it would likely result in hazards in a real CPU where latency is a critical factor. I will try finishing the 4-way cache to address the problem after project in my local repo.

---

### Skills acquired

#### Technical skill
SystemVerilog: This course has taken me from knowing nothing about SystemVerilog to being able to write and apply the language effectively. This hands-on approach has made learning both engaging and rewarding.

GIT: A powerful tool to work in code and link the group together even remoted. The command makes some pain at the beginning but makes life much easier as getting accustomed to it.

Gtkwave: The project introduces a powerful software to detect waveform, which help a lot in trouble shooting and locating the problem.

#### Softskills
Adapbility: Constructing and debugging a CPU is quite an uniqe experience. It has allowed me to develop precise language expression skills, to check everything step by step and have enough patience to tackle problems.

#### CPU Architecture
Working on this project has significantly deepened my understanding of the operations of a RISC-V CPU. I have gained valuable insights into the intricate mechanisms by which a CPU processes data and executes instructions, including the interplay between various components such as the control unit, ALU, memory, and cache.

### What's next
I plan to focus on resolving the implementation of the 4-way cache and exploring ways to visualize cache performance using Vbuddy, if feasible. Once this is accomplished, I am insterested in add-on programs using the Verilog language, further exploring in hardware design and simulation.