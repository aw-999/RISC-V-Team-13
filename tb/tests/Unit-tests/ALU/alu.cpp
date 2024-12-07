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
    dut->ALUCtrl = 0b0000;  // ADD
    dut->SrcA = 0x0000000A;
    dut->SrcB = 0x00000020;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x0000002A);  // Expect 0x2A
}

TEST_F(ALUTest, SubInstr) {
    dut->ALUCtrl = 0b0001;  // SUB
    dut->SrcA = 0x00000030;
    dut->SrcB = 0x00000010;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x00000020);  // Expect 0x20
}

TEST_F(ALUTest, AndInstr) {
    dut->ALUCtrl = 0b0010;  // AND
    dut->SrcA = 0x000000FF;
    dut->SrcB = 0x0000000F;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x0000000F);  // Expect 0xF
}

TEST_F(ALUTest, OrInstr) {
    dut->ALUCtrl = 0b0011;  // OR
    dut->SrcA = 0x0000000F;
    dut->SrcB = 0x000000F0;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x000000FF);  // Expect 0xFF
}

TEST_F(ALUTest, XorInstr) {
    dut->ALUCtrl = 0b0100;  // XOR
    dut->SrcA = 0x0000000F;
    dut->SrcB = 0x000000F0;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x000000FF);  // Expect 0xFF
}

TEST_F(ALUTest, SltInstr) {
    dut->ALUCtrl = 0b1000;  // SLT (Set Less Than)
    dut->SrcA = 0x00000010;
    dut->SrcB = 0x00000020;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x00000001);  // Expect 1 (true for slt)
}

TEST_F(ALUTest, SltUnsignedInstr){
    dut->ALUCtrl = 0b1001;
    dut->SrcA = 0xFFFFFFFF;         //expect 0 as SrcA > SrcB in unsigned terms
    dut->SrcB = 0xFF000000;
    evaluate(); 
    EXPECT_EQ(dut->ALUResult, 0x00000000);
}

TEST_F(ALUTest, SllInstr) {
    dut->ALUCtrl = 0b0101;  // SLL (Shift Left Logical)
    dut->SrcA = 0x00000001;
    dut->SrcB = 0x00000002;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x00000004);  // Expect 4
}

TEST_F(ALUTest, SrlInstr) {
    dut->ALUCtrl = 0b0110;  // SRL (Shift Right Logical)
    dut->SrcA = 0x00000010;
    dut->SrcB = 0x00000002;
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x00000004);  // Expect 4
}

// Individual Flag Tests

TEST_F(ALUTest, Flag_BEQ) {
    dut->ALUCtrl = 0b0001;  // beq
    dut->SrcA = 0x12345678;  // Result should be 0 for beq flag to be set
    dut->SrcB = 0x12345678;
    evaluate();
    EXPECT_EQ(dut->ZeroFlag, 1);  // Expect flag to be 1 for equality
}

TEST_F(ALUTest, Flag_BNE) {
    dut->ALUCtrl = 0b0001;  // bne
    dut->SrcA = 0xABC12300;  // Result should be non-zero for bne flag to be set
    dut->SrcB = 0x0BC12300;
    evaluate();
    EXPECT_EQ(dut->ZeroFlag, 0);  // Expect Zero flag to be 0, values arent equal
}

TEST_F(ALUTest, Flag_BLT) {
    dut->ALUCtrl = 0b0001;  // blt
    dut->SrcA = 0xFFFFFFFF;  // Negative value (0xFFFFFFFF) for signed comparison
    dut->SrcB = 0x12345678;
    evaluate();
    EXPECT_EQ(dut->NegativeFlag, 1);  // Expect flag to be 1, SrcA < SrcB in signed terms
}

TEST_F(ALUTest, Flag_BGE) {
    dut->ALUCtrl = 0b0001;  // bge
    dut->ALUResult = 0x00000010;  // Positive value for bge flag
    evaluate();
    EXPECT_EQ(dut->NegativeFlag, 0);  // Expect flag to be 1 for greater than or equal
}

TEST_F(ALUTest, Flag_BLTU) {
    dut->ALUCtrl = 0b1001;  // bltu (unsigned less than)
    dut->SrcA = 0x0000000F;  // Large value (interpreted as negative for unsigned)
    dut->SrcB = 0xFFFFFFFF;
    evaluate();
    EXPECT_EQ(dut->UnsignedLess, 1);  // Expect flag to be 1 for unsigned less than
}

TEST_F(ALUTest, Flag_BGEU) {
    dut->ALUCtrl = 0b1001;  // bgeu (unsigned greater than or equal)
    dut->SrcA = 0xFFFFFFFF;  // Large value (interpreted as negative for unsigned)
    dut->SrcB = 0xF0000000;
    evaluate();
    EXPECT_EQ(dut->UnsignedLess, 0);  // Expect flag to be 1 for unsigned greater than or equal
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
