#include "gtest/gtest.h"
#include "Vreg32.h"  // Include the correct Verilated header for the module
#include <verilated.h>
#include <iostream>
#include <memory>

class reg32Test : public ::testing::Test {
public:
    Vreg32* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override{
        dut = new Vreg32;
        dut->clk = 0;          // Initialize clk
        dut->RegWrite = 0;     // Start with write disabled
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate(){
        dut->eval();  
    }

    void clockTick(){
        dut->clk = 1;  // Rising edge of the clock
        evaluate();
        dut->clk = 0;  // Falling edge of the clock
        evaluate();
    }
};

TEST_F(reg32Test, WriteAndReadValidRegister){
    dut->write_addr = 1;         // Write to register 1
    dut->DIn = 0x123ABC10; // Data to write
    dut->RegWrite = 1;     // Enable write
    evaluate();
    clockTick();

    dut->RegWrite = 0;     // Disable write
    dut->AdOut1 = 1;       // Read from reg    1
    evaluate();
    clockTick();
    std::cout << "DIn: " << dut->DIn;

    EXPECT_EQ(dut->DOut1, 0x123ABC10); // Verify written data
}

 TEST_F(reg32Test, WriteAndReadAnotherRegister) {
     dut->write_addr = 2;         // Write to register 2
     dut->DIn = 0x12345678; // Data to write
    dut->RegWrite = 1;     // Enable write
    evaluate();
    clockTick();
    dut->RegWrite = 0;     // Disable write
    dut->AdOut2 = 2;       // Read from register 2
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut2, 0x12345678); 
}

TEST_F(reg32Test, WriteToRegister0ShouldNotChange) {
    dut->write_addr = 0;         // write to register 0
    dut->DIn = 0x12345678; // Data 
    dut->RegWrite = 1;     // eable write
    evaluate();
    clockTick();
    dut->RegWrite = 0;     // Disable write
    dut->AdOut1 = 0;       // Read from register 0
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut1, 0); // reg 0 should always return 0
}

TEST_F(reg32Test, WriteAndReadMultipleRegisters) {
    dut->write_addr = 1;         // Write to reg 1
    dut->DIn = 0x1;        // Data to write
    dut->RegWrite = 1;     // Enable write
    evaluate();
    clockTick();
    dut->write_addr = 2;         // Write to reg 2
    dut->DIn = 0x2;        // Data to write
    evaluate();
    clockTick();
    dut->RegWrite = 0;     // Disable write
    dut->AdOut1 = 1;       // Read from register 1
    dut->AdOut2 = 2;       // Read from register 2
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut1, 0x1); // data in register 1
    EXPECT_EQ(dut->DOut2, 0x2); //  data in register 2
}

TEST_F(reg32Test, WriteAndReadFromSameRegister) {
    dut->write_addr = 3;         // Write to register 3
    dut->DIn = 0xABCD1234; // Data to write
    dut->RegWrite = 1;     // Enable write
    evaluate();
    clockTick();
    dut->RegWrite = 0;     // Disable write
    dut->AdOut1 = 3;       // Read from regi 3 port 1
    dut->AdOut2 = 3;       // Read from reg 3 port 2
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut1, 0xABCD1234); //  read  port 1
    EXPECT_EQ(dut->DOut2, 0xABCD1234); //  readport 2
}

TEST_F(reg32Test, WriteWithMultipleClocks) {
    dut->write_addr = 4;         // register 4 write
    dut->DIn = 0x12345678; // Data 
    dut->RegWrite = 1;     // enable write
    evaluate();
    clockTick();
    dut->RegWrite = 0;     // disable write
    dut->AdOut1 = 4;       // Read from register 4
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut1, 0x12345678); // Verify written data persists
    evaluate();
    clockTick();
    EXPECT_EQ(dut->DOut1, 0x12345678); // check sfter 1 clk
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
