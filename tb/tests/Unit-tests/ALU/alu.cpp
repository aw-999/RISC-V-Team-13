#include "gtest/gtest.h"
#include "Valu.h"  // Verilated ALU header
#include <verilated.h>
#include <memory>

// ALU Test Class
class ALUTest : public ::testing::Test {
public:
    std::unique_ptr<Valu> dut;  // Device Under Test (DUT)

protected:
    void SetUp() override {
        Verilated::traceEverOn(true);
        dut = std::make_unique<Valu>();
    }

    void TearDown() override {
        dut.reset();
    }

    void evaluate() {
        dut->eval();  // Evaluate the model
    }
};

// Test: Default Case
TEST_F(ALUTest, DefaultCase) {
    dut->SrcA = 0x00000010;  // Arbitrary value
    dut->SrcB = 0x00000020;  // Arbitrary value
    dut->ALUCtrl = 0b1111;   // Invalid control signal for default case
    evaluate();
    EXPECT_EQ(dut->ALUResult, 0x00000000);  // Expect ALUResult to default to 0
    EXPECT_EQ(dut->branch, 0);             // Expect branch to default to 0
}

// Test: BGE (Branch Greater than or Equal - signed)
TEST_F(ALUTest, BranchGreaterEqual) {
    dut->SrcA = 0x00000020;  // 32
    dut->SrcB = 0x00000010;  // 16
    dut->ALUCtrl = 0b1101;   // BGE
    evaluate();
    EXPECT_EQ(dut->branch, 1);  // Expect branch = 1 since SrcA >= SrcB

    dut->SrcA = 0x00000010;  // 16
    dut->SrcB = 0x00000020;  // 32
    dut->ALUCtrl = 0b1101;   // BGE
    evaluate();
    EXPECT_EQ(dut->branch, 0);  // Expect branch = 0 since SrcA < SrcB
}

// Test: BLT (Branch Less Than - signed)
TEST_F(ALUTest, BranchLessThan) {
    dut->SrcA = 0x00000010;  // 16
    dut->SrcB = 0x00000020;  // 32
    dut->ALUCtrl = 0b1100;   // BLT
    evaluate();
    EXPECT_EQ(dut->branch, 1);  // Expect branch = 1 since SrcA < SrcB

    dut->SrcA = 0x00000020;  // 32
    dut->SrcB = 0x00000010;  // 16
    dut->ALUCtrl = 0b1100;   // BLT
    evaluate();
    EXPECT_EQ(dut->branch, 0);  // Expect branch = 0 since SrcA >= SrcB
}

// Test: BGEU (Branch Greater than or Equal - unsigned)
TEST_F(ALUTest, BranchGreaterEqualUnsigned) {
    dut->SrcA = 0xFFFFFFFF;  // Large unsigned value
    dut->SrcB = 0x00000001;  // Small unsigned value
    dut->ALUCtrl = 0b1111;   // BGEU
    evaluate();
    EXPECT_EQ(dut->branch, 1);  // Expect branch = 1 since SrcA >= SrcB (unsigned)

    dut->SrcA = 0x00000001;  // Small unsigned value
    dut->SrcB = 0xFFFFFFFF;  // Large unsigned value
    dut->ALUCtrl = 0b1111;   // BGEU
    evaluate();
    EXPECT_EQ(dut->branch, 0);  // Expect branch = 0 since SrcA < SrcB (unsigned)
}

// Test: BLTU (Branch Less Than - unsigned)
TEST_F(ALUTest, BranchLessThanUnsigned) {
    dut->SrcA = 0x00000001;  // Small unsigned value
    dut->SrcB = 0xFFFFFFFF;  // Large unsigned value
    dut->ALUCtrl = 0b1110;   // BLTU
    evaluate();
    EXPECT_EQ(dut->branch, 1);  // Expect branch = 1 since SrcA < SrcB (unsigned)

    dut->SrcA = 0xFFFFFFFF;  // Large unsigned value
    dut->SrcB = 0x00000001;  // Small unsigned value
    dut->ALUCtrl = 0b1110;   // BLTU
    evaluate();
    EXPECT_EQ(dut->branch, 0);  // Expect branch = 0 since SrcA >= SrcB (unsigned)
}

// Main Function
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
