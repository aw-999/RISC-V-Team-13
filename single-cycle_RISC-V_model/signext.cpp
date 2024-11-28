#include "gtest/gtest.h"
#include "Vimm.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class SignExtensionTest : public ::testing::Test
{
public:

protected:
    Vimm* dut; 

    virtual void SetUp() override {
        dut = new Vimm;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval(); 
    }
};

// TEST_F(SignExtensionTest, PositiveImmediateNoSignExtension) {
//     dut->instr = 0x00000A;   
//     dut->immSrc = 1;
//     evaluate();
//     // std::cout << "Running Positive Immediate with No Sign Extension\n";
//     // std::cout << "instr: " << dut->instr << " | immSrc: " << dut->immSrc << " | immOp: " << dut->immOp;
//     // std::cout << "\n------------------------------------------------\n";
//     EXPECT_EQ(dut->immOp, 0x0000000A); 
// }

TEST_F(SignExtensionTest, ItypeNegative) {
    dut->instr = 0xFFFFFFFA;   
    dut->IMMsrc = 0b000;
    evaluate();
    EXPECT_EQ(dut->out, 0xFFFFFFFF); 
}

TEST_F(SignExtensionTest, StypePositive) {
    dut->instr = 0x00000AA0;  
    dut->IMMsrc = 0b001;        
    evaluate();
    EXPECT_EQ(dut->out, 0x00000015); 
}

TEST_F(SignExtensionTest, BtypeNegative){
    dut->instr = 0x800A1230;
    dut->IMMsrc = 0b010;
    evaluate();
    EXPECT_EQ(dut->out, 0xFFFFF004);
}

TEST_F(SignExtensionTest, UtypePositive){
    dut->instr = 0x0007b337;
    dut->IMMsrc = 0b011;
    evaluate();
    EXPECT_EQ(dut->out, 0x0007b000);
}

TEST_F(SignExtensionTest, JtypeNegative){
    dut->instr = 0x9bdff3ef;
    dut->IMMsrc = 0b100;
    evaluate();
    EXPECT_EQ(dut->out, 0xFFFFF9BC);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}