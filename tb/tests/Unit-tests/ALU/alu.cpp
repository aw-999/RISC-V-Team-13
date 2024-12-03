#include "gtest/gtest.h"
#include "Valu.h"  // Include the correct Verilated header for the ALU module
#include <verilated.h>
#include <iostream>
#include <memory>

class ALUTest : public ::testing::Test {
public:
    Valu* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override {
        dut = new Valu;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval();  
    }
};

// Test each ALU operation with appropriate control signals
TEST_F(ALUTest, AddInstr) {
    dut->ALUctrl = 0b000;  // ADD
    dut->SrcA = 0x0000000A;
    dut->SrcB = 0x00000020;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x0000002A);  // Expect 0x2A
}

TEST_F(ALUTest, SubInstr) {
    dut->ALUctrl = 0b001;  // SUB
    dut->SrcA = 0x00000030;
    dut->SrcB = 0x00000010;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x00000020);  // Expect 0x20
}

TEST_F(ALUTest, AndInstr) {
    dut->ALUctrl = 0b010;  // AND
    dut->SrcA = 0x000000FF;
    dut->SrcB = 0x0000000F;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x0000000F);  // Expect 0xF
}

TEST_F(ALUTest, OrInstr) {
    dut->ALUctrl = 0b011;  // OR
    dut->SrcA = 0x0000000F;
    dut->SrcB = 0x000000F0;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x000000FF);  // Expect 0xFF
}

TEST_F(ALUTest, XorInstr) {
    dut->ALUctrl = 0b100;  // XOR
    dut->SrcA = 0x0000000F;
    dut->SrcB = 0x000000F0;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x000000FF);  // Expect 0xFF
}

TEST_F(ALUTest, SltInstr) {
    dut->ALUctrl = 0b101;  // SLT (Set Less Than)
    dut->SrcA = 0x00000010;
    dut->SrcB = 0x00000020;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x00000001);  // Expect 1 (true for slt)
}

TEST_F(ALUTest, SllInstr) {
    dut->ALUctrl = 0b110;  // SLL (Shift Left Logical)
    dut->SrcA = 0x00000001;
    dut->SrcB = 0x00000002;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x00000004);  // Expect 4
}

TEST_F(ALUTest, SrlInstr) {
    dut->ALUctrl = 0b111;  // SRL (Shift Right Logical)
    dut->SrcA = 0x00000010;
    dut->SrcB = 0x00000002;
    evaluate();
    EXPECT_EQ(dut->ALUresult, 0x00000004);  // Expect 4
}

// Individual Flag Tests

TEST_F(ALUTest, Flag_BEQ) {
    dut->ALUflag = 0b000;  // beq
    dut->ALUresult = 0x00000000;  // Result should be 0 for beq flag to be set
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for equality
}

TEST_F(ALUTest, Flag_BNE) {
    dut->ALUflag = 0b001;  // bne
    dut->ALUresult = 0x00000001;  // Result should be non-zero for bne flag to be set
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for not equal
}

TEST_F(ALUTest, Flag_BLT) {
    dut->ALUflag = 0b100;  // blt
    dut->ALUresult = 0xFFFFFFFF;  // Negative value (0xFFFFFFFF) for signed comparison
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for less than (signed comparison)
}

TEST_F(ALUTest, Flag_BGE) {
    dut->ALUflag = 0b101;  // bge
    dut->ALUresult = 0x00000010;  // Positive value for bge flag
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for greater than or equal
}

TEST_F(ALUTest, Flag_BLTU) {
    dut->ALUflag = 0b110;  // bltu (unsigned less than)
    dut->ALUresult = 0xFFFFFFFF;  // Large value (interpreted as negative for unsigned)
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for unsigned less than
}

TEST_F(ALUTest, Flag_BGEU) {
    dut->ALUflag = 0b111;  // bgeu (unsigned greater than or equal)
    dut->ALUresult = 0x00000010;  // Positive value for bgeu flag
    evaluate();
    EXPECT_EQ(dut->flag, 1);  // Expect flag to be 1 for unsigned greater than or equal
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
