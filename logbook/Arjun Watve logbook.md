## Contents
- 1 Unit Tests on modules for single-cycle RISC-V RV32I Processor
	1. Sign Extend Unit test (complete)
	2. Register File Unit test (complete)
	3. Program Counter Unit test 
	4. ALU Unit test (complete)
	5. Control Module Unit test (complete)
	6. ALUDecode Unit test (complete)
	7. Data Memory Unit test (complete)
	8. Instruction Memory Unit test 
- 2 F1 Program Verification
- 3 Creating ALU, ALUDecode, Control Unit
- 4 Debugging top module
- 5 Testing given assembly programs
	1. Program 1 - Addi , BNE
	2. Program 2 - 


Things to complete single cycle:
	test all with given programs


## 1. Unit Tests
Unit Tests are a key part of the testing and verification processes, having created Unit Tests for almost every module, it has allowed me to gain a deeper understanding of each of the individual components in the RISC-V processor. Industry standard testbenches were created using G-Test and considering various edge cases and inputs.

### 1.1 Sign Extend Unit Test
The Sign Extend Unit had 5 methods of extension, namely I, S, B, U, J types, examples were hand calculated to verify the correct immediate was being produced.

This is a short snapshot of code (for illustrative purposes - not identical to actual code.) of how the extension module was implemented by another teammate:
```systemverilog
	case(IMMsrc)
    3'b000: out[W-1:0] = {{20{sign}}, instr[W-1:W-12]}; // I-type
```

Below is a snippet of code used to test the default case:

```c++
TEST_F(SignExtensionTest, Default){

    dut->instr = 0x12345678;

    dut->IMMsrc = 0b111; //invalid immsrc

    evaluate();

    EXPECT_EQ(dut->out, 0x12345678); //defaults to just returning instr

}
```

A value of instr is passed in and an invalid IMMsrc code (not specified by the code explicitly) is provided. The testbench checks that the output value is identical to the original instruction. 

An image is shown below verifying that each of the 6 testcases passed, indicating that the intended logic was outputted correctly.

![[Pasted image 20241211235420.png|300x300]]

### 1.2 Register File Unit Test

