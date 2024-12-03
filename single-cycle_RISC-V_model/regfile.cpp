#include "gtest/gtest.h"
#include "Vreg_file.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class reg_fileTest : public ::testing::Test
{
public:
    Vreg_file* dut;  // Device Under Test (DUT)

protected:
    virtual void SetUp() override {
        dut = new Vreg_file;
        dut->reset = 1;  // Start with reset
        dut->write_enable = 0;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval();  
    }

    void clockTick() {
        dut->clk = 1;  // Rising edge of the clock
        evaluate();
        dut->clk = 0;  // Falling edge of the clock
        evaluate();
    }
};

TEST_F(reg_fileTest, ResetTest) {
    dut->reset = 1;
    clockTick();
    for (int i = 1; i < 32; i++) {
        EXPECT_EQ(dut->read_data1, 0);
        EXPECT_EQ(dut->read_data2, 0);
    }
    EXPECT_EQ(dut->read_data1, 0);
    EXPECT_EQ(dut->read_data2, 0);
}

TEST_F(reg_fileTest, WriteAndReadValidRegister) {
    dut->write_addr = 1;
    dut->write_data = 0xA5A5A5A5;
    dut->write_enable = 1;
    clockTick();
    dut->read_addr1 = 1;
    clockTick();
    EXPECT_EQ(dut->read_data1, 0xA5A5A5A5);
}

TEST_F(reg_fileTest, WriteAndReadAnotherRegister) {
    dut->write_addr = 2;
    dut->write_data = 0xDEADBEEF;
    dut->write_enable = 1;
    clockTick();
    dut->read_addr2 = 2;
    clockTick();
    EXPECT_EQ(dut->read_data2, 0xDEADBEEF);
}

TEST_F(reg_fileTest, WriteToRegister0ShouldNotChange) {
    dut->write_addr = 0;
    dut->write_data = 0x12345678;
    dut->write_enable = 1;
    clockTick();
    dut->read_addr1 = 0;
    clockTick();
    EXPECT_EQ(dut->read_data1, 0);
}

TEST_F(reg_fileTest, ResetAfterWriteOperations) {
    dut->write_addr = 1;
    dut->write_data = 0xA5A5A5A5;
    dut->write_enable = 1;
    clockTick();
    dut->reset = 1;
    clockTick();
    for (int i = 1; i < 32; i++) {
        EXPECT_EQ(dut->read_data1, 0);
        EXPECT_EQ(dut->read_data2, 0);
    }
    EXPECT_EQ(dut->read_data1, 0);
    EXPECT_EQ(dut->read_data2, 0);
}

TEST_F(reg_fileTest, WriteAndReadMultipleRegisters) {
    dut->write_addr = 1;
    dut->write_data = 0x1;
    dut->write_enable = 1;
    clockTick();
    dut->write_addr = 2;
    dut->write_data = 0x2;
    clockTick();
    dut->read_addr1 = 1;
    dut->read_addr2 = 2;
    clockTick();
    EXPECT_EQ(dut->read_data1, 0x1);
    EXPECT_EQ(dut->read_data2, 0x2);
}

TEST_F(reg_fileTest, WriteAndReadFromSameRegister) {
    dut->write_addr = 3;
    dut->write_data = 0xDEADBEEF;
    dut->write_enable = 1;
    clockTick();
    dut->read_addr1 = 3;
    dut->read_addr2 = 3;
    clockTick();
    EXPECT_EQ(dut->read_data1, 0xDEADBEEF);
    EXPECT_EQ(dut->read_data2, 0xDEADBEEF);
}

TEST_F(reg_fileTest, WriteWithMultipleClocks) {
    dut->write_addr = 4;
    dut->write_data = 0x12345678;
    dut->write_enable = 1;
    clockTick();
    dut->read_addr1 = 4;
    clockTick();
    EXPECT_EQ(dut->read_data1, 0x12345678);
    clockTick();
    EXPECT_EQ(dut->read_data1, 0x12345678);
    clockTick();
    EXPECT_EQ(dut->read_data1, 0x12345678);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}