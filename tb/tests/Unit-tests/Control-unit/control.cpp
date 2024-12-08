#include "gtest/gtest.h"
#include "Vcontrol.h"  // Include the correct Verilated header for the control module
#include <verilated.h> 
#include <iostream>
#include <memory>

class ControlUnitTest : public ::testing::Test {
public:
    Vcontrol* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override {
        dut = new Vcontrol;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval();  
    }
};

// Test each Control unit operation with appropriate control signals
TEST_F(ControlUnitTest, ALUopAssignmentTest) {
    dut->opcode = 0b0110011;  // r-type instr
    evaluate();
    EXPECT_EQ(dut->ALUop, 0b000);  // Expect 0b000
}

TEST_F(ControlUnitTest, DefaultTest) {
    dut->opcode = 0b1111111;  // invalid opcode
    dut->funct3 = 0b110; //random funct3 - shouldnt affect anything
    evaluate();
    EXPECT_EQ(dut->ALUop, 0b000);  // Expect default for all (0)
    EXPECT_EQ(dut->ALUSrc, 0b0);
    EXPECT_EQ(dut->ResultSrc, 0b00);
    EXPECT_EQ(dut->ImmSrc, 0b00);
    EXPECT_EQ(dut->RegWrite, 0b0);
    EXPECT_EQ(dut->MemWrite, 0b0);

}

TEST_F(ControlUnitTest, ResultSrcaluinstr) {
    dut->opcode = 0b1111110; //  Invalid opcode
    evaluate();
    EXPECT_EQ(dut->ResultSrc, 0b00);  // Expect 0b00 (default)
}

TEST_F(ControlUnitTest, ResultSrcloadinstr) {
    dut->opcode = 0b0000011; //  I-type Load
    evaluate();
    EXPECT_EQ(dut->ResultSrc, 0b01);  // Expect 0b01, load from data mem
}

TEST_F(ControlUnitTest, ResultSrcJal) {
    dut->opcode = 0b1101111; // jal
    evaluate();
    EXPECT_EQ(dut->ResultSrc, 0b10);  // Expect 0b10 (PC + 4)
}

TEST_F(ControlUnitTest, ResultSrcJalr) {
    dut->opcode = 0b1100111; // jalr
    evaluate();
    EXPECT_EQ(dut->ResultSrc, 0b10);  // Expect 0b10 (PC + 4)
}

TEST_F(ControlUnitTest, MemWritetestSTYPE) {
    dut->opcode = 0b0100011; //  S-type instr, stores in datamem
    evaluate();
    EXPECT_EQ(dut->MemWrite, 0b1);  // Expect 0b1, store in datamem
}

TEST_F(ControlUnitTest, MemWriteRtype) {
    dut->opcode = 0b0110011; //  R-type instr, doesnt write
    evaluate();
    EXPECT_EQ(dut->MemWrite, 0b0);  // Expect 0b0
}

TEST_F(ControlUnitTest, ALUSrcNoImmRtype) {
    dut->opcode = 0b0110011; //  R-type instr, takes 2nd reg
    evaluate();
    EXPECT_EQ(dut->ALUSrc, 0b0);  // Expect 0b0, takes 2nd reg
}

TEST_F(ControlUnitTest, ALUSrcNoImmBtype) {
    dut->opcode = 0b1100011; //  b-type instr
    evaluate();
    EXPECT_EQ(dut->ALUSrc, 0b0);  // Expect 0b0, branch takes 2nd reg
}

TEST_F(ControlUnitTest, ALUSrcImm) {
    dut->opcode = 0b0010011; //  I-type instr
    evaluate();
    EXPECT_EQ(dut->ALUSrc, 0b1);  // Expect 0b1, I-type takes 2nd reg
}

TEST_F(ControlUnitTest, ALUSrcJalr) {
    dut->opcode = 0b1100111; // jalr
    evaluate();
    EXPECT_EQ(dut->ALUSrc, 0b1);  // Expect 0b1 (jalr uses immediate)
}


TEST_F(ControlUnitTest, ImmSrcItype) {
    dut->opcode = 0b0010011;  // I-type 
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b000);  // Expect 0b000 - standard extend
}

TEST_F(ControlUnitTest, ImmSrcStype) {
    dut->opcode = 0b0100011;  // S-type
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b001);  // Expect 0b001 - 
}

TEST_F(ControlUnitTest, ImmSrcBtype) {
    dut->opcode = 0b1100011;  // B-type
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b010);  // Expect 0b010 - 
}

TEST_F(ControlUnitTest, ImmSrcUtypeLUI) {
    dut->opcode = 0b0110111;  // U-type (lui)
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b011);  // Expect 0b011 for U-type
}

TEST_F(ControlUnitTest, ImmSrcUtypeAUIPC) {
    dut->opcode = 0b0010111;  // U-type (auipc)
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b011);  // Expect 0b011 for U-type
}

TEST_F(ControlUnitTest, ImmSrcJtype) {
    dut->opcode = 0b1101111;  // J-type (jal)
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b100);  // Expect 0b100 for J-type
}

TEST_F(ControlUnitTest, ImmSrcJtypeJALR) {
    dut->opcode = 0b1100111;  // I-type (jalr uses J-type immediate format)
    evaluate();
    EXPECT_EQ(dut->ImmSrc, 0b100);  // Expect 0b100 for J-type immediate
}

TEST_F(ControlUnitTest, RegWriteLoadInstr) {
    dut->opcode = 0b0000011;  // Load instruction (e.g., lw)
    evaluate();
    EXPECT_EQ(dut->RegWrite, 1);  // Expect RegWrite = 1
}

TEST_F(ControlUnitTest, RegWriteRtypeInstr) {
    dut->opcode = 0b0110011;  // R-type instruction (e.g., add)
    evaluate();
    EXPECT_EQ(dut->RegWrite, 1);  // Expect RegWrite = 1
}

TEST_F(ControlUnitTest, RegWriteStoreInstr) {
    dut->opcode = 0b0100011;  // Store instruction (e.g., sw)
    evaluate();
    EXPECT_EQ(dut->RegWrite, 0);  // Expect RegWrite = 0
}

TEST_F(ControlUnitTest, RegWriteBranchInstr) {
    dut->opcode = 0b1100011;  // Branch instruction (e.g., beq)
    evaluate();
    EXPECT_EQ(dut->RegWrite, 0);  // Expect RegWrite = 0
}

TEST_F(ControlUnitTest, RegWriteJAL) {
    dut->opcode = 0b1101111;  // Jump and Link (jal)
    evaluate();
    EXPECT_EQ(dut->RegWrite, 1);  // Expect RegWrite = 1
}

// Test: beq (branch if equal)
TEST_F(ControlUnitTest, BranchBeqZeroFlag) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b000; // beq
    dut->ZeroFlag = 1; // ZeroFlag set for equality
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0bb01 (branch taken)
}

// Test: bne (branch if not equal)
TEST_F(ControlUnitTest, BranchBneZeroFlag) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b001; // bne
    dut->ZeroFlag = 0; // ZeroFlag unset (not equal)
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0bb01 (branch taken)
}

// Test: blt (branch if less than, signed comparison)
TEST_F(ControlUnitTest, BranchBltNegativeFlag) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b100; // blt
    dut->NegativeFlag = 1; // NegativeFlag set (less than)
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0b01 (branch taken)
}

// Test: bge (branch if greater or equal, signed comparison)
TEST_F(ControlUnitTest, BranchBgeNegativeFlag) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b101; // bge
    dut->NegativeFlag = 0; // NegativeFlag unset (greater or equal)
    dut->ZeroFlag = 1; // Equal should also branch
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0b01 (branch taken)
}

// Test: bltu (branch if less than, unsigned comparison)
TEST_F(ControlUnitTest, BranchBltuUnsignedLess) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b110; // bltu
    dut->UnsignedLess = 1; // UnsignedLess flag set (less than)
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0b01 (branch taken)
}

// Test: bgeu (branch if greater or equal, unsigned comparison)
TEST_F(ControlUnitTest, BranchBgeuUnsignedLess) {
    dut->opcode = 0b1100011; // Branch opcode
    dut->funct3 = 0b111; // bgeu
    dut->UnsignedLess = 0; // UnsignedLess flag unset (greater or equal)
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0b01 (branch taken)
}

// Test: jal (jump and link)
TEST_F(ControlUnitTest, JumpAndLink) {
    dut->opcode = 0b1101111; // jal opcode
    evaluate();
    EXPECT_EQ(dut->PCSrc, 0b01); // PCSrc should be 0b01 (jump to target address)
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
