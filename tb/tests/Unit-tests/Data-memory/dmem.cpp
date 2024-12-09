#include "gtest/gtest.h"
#include "Vram.h"  // Include the Verilated header for the RAM module
#include <verilated.h>
#include <iostream>
#include <memory>

class RamTest : public ::testing::Test {
public:
    Vram* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override {
        dut = new Vram;
        dut->clk = 0;  // Initialize clock to 0
        dut->RamWrite = 0;  // Initialize RamWrite to 0
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval();  
    }

    void toggleClock() {
        dut->clk = 1;
        evaluate();
        dut->clk = 0;
        evaluate();
    }
};

// Test writing and reading a single byte (lb/lbu)
TEST_F(RamTest, WriteAndReadByte) {
    // Step 1: Write a byte to memory
    dut->func3 = 0b000;  // Byte write (SB)
    dut->Ad = 0x00000010;  // Address
    dut->DIn = 0x000000AB;  // Data to write (only lower 8 bits used)
    dut->RamWrite = 1;  // Enable write
    evaluate();
    toggleClock();  // Simulate clock edge

    // Step 2: Read back the byte (signed)
    dut->RamWrite = 0;  // Disable write
    dut->func3 = 0b000;  // Read byte (LB)
    dut->Ad = 0x00000010;  // Same address   // Simulate clock edge
    evaluate();  // Evaluate combinational logic
    toggleClock();
    EXPECT_EQ(dut->DOut, 0xFFFFFFAB);  // Sign-extended value for -85

    // Step 3: Read back the byte (unsigned)
    dut->func3 = 0b100;  // Read byte (LBU)
    evaluate();
    toggleClock();
    EXPECT_EQ(dut->DOut, 0x000000AB);  // Zero-extended value
}


// Test writing and reading a halfword (lh/lhu)
TEST_F(RamTest, WriteAndReadHalfword) {
    // Write a halfword to memory
    dut->func3 = 0b001;  // Halfword write
    dut->Ad = 0x00000020;  // Address
    dut->DIn = 0x0000CDEF;  // Data to write
    dut->RamWrite = 1;  // Enable write
    evaluate();
    toggleClock();  // Simulate clock edge

    // Read back the halfword (signed)
    dut->RamWrite = 0;  // Disable write
    dut->func3 = 0b001;  // Read halfword (lh)
    evaluate();
    EXPECT_EQ(dut->DOut, 0xFFFFCDEF);  // Sign-extended value for -12561

    // Read back the halfword (unsigned)
    dut->func3 = 0b101;  // Read halfword (lhu)
    evaluate();
    toggleClock();
    EXPECT_EQ(dut->DOut, 0x0000CDEF);  // Zero-extended value
}

// Test writing and reading a word (lw)
TEST_F(RamTest, WriteAndReadWord) {
    // Write a word to memory
    dut->func3 = 0b010;  // Word write
    dut->Ad = 0x00000030;  // Address
    dut->DIn = 0x12345678;  // Data to write
    dut->RamWrite = 1;  // Enable write
    evaluate();
    toggleClock();  // Simulate clock edge

    // Read back the word
    dut->RamWrite = 0;  // Disable write
    dut->func3 = 0b010;  // Read word (lw)
    evaluate();
    toggleClock();
    EXPECT_EQ(dut->DOut, 0x12345678);  // Verify the written value
}

// Test default behavior (invalid func3)
TEST_F(RamTest, ReadDefault) {
    // Write a word to memory
    dut->func3 = 0b010;  // Word write
    dut->Ad = 0x00000040;  // Address
    dut->DIn = 0x89ABCDEF;  // Data to write
    dut->RamWrite = 1;  // Enable write
    evaluate();
    toggleClock();  // Simulate clock edge

    // Attempt to read with invalid func3
    dut->RamWrite = 0;  // Disable write
    dut->func3 = 0b111;  // Invalid func3
    evaluate();
    toggleClock();
    // Default to word read behavior
    EXPECT_EQ(dut->DOut, 0x89ABCDEF);  // Should read the written word
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
