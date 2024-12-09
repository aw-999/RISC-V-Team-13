#include "gtest/gtest.h"
#include "VALUDecode.h"  // Include the correct Verilated header for the ALU module
#include <verilated.h>
#include <iostream>
#include <memory>

class ALUDecodeTest : public ::testing::Test {
public:
    VALUDecode* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override {
        dut = new VALUDecode;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval();  
    }
};

TEST_F(ALUDecodeTest, RtypetestAdd){
    dut->ALUop = 0b000;
    dut->funct3 = 0b000; //ADD instr;
    dut->funct75 = 0b0;
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0000); //expect 0b0000
}

TEST_F(ALUDecodeTest, RtypetestSub){
    dut->ALUop = 0b000;
    dut->funct3 = 0b000; //Sub instr;
    dut->funct75 = 0b1;
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0001); //expect 0b0001
}

TEST_F(ALUDecodeTest, ALUOpDefaultTest){
    dut->ALUop = 0b111;
    dut->funct3 = 0b111; 
    dut->funct75 = 0b1; //invalid combo
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0000); //expect 0b0000
}

TEST_F(ALUDecodeTest, Funct3Funct75DefaultTest){
    dut->ALUop = 0b000;
    dut->funct3 = 0b111; 
    dut->funct75 = 0b1; //invalid combo
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0000); //expect 0b0000
}

TEST_F(ALUDecodeTest, ItypeTest){
    dut->ALUop = 0b001; //I-type
    dut->funct3 = 0b101; 
    dut->funct75 = 0b1; //SRL arithmetic
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0111); //expect 0b0111
}

TEST_F(ALUDecodeTest, BtypeDefault){
    dut->ALUop = 0b100; //I-type
    dut->funct3 = 0b011; 
    dut->funct75 = 0b1; //invalid
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0000); 
}

TEST_F(ALUDecodeTest, BGEtest){
    dut->ALUop = 0b100; //I-type
    dut->funct3 = 0b101; //bge
    dut->funct75 = 0b1; 
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0001); //expect 0b0001 - subtracts in ALU
}

TEST_F(ALUDecodeTest, JALRTest){
    dut->ALUop = 0b101;
    dut->funct3 = 0b000;
    evaluate();
    EXPECT_EQ(dut->ALUCtrl, 0b0000); //adds imm in ALU
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
