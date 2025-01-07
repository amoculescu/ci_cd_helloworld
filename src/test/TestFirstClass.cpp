//
// Created by andrei on 06/01/2025.
//

#include "gtest/gtest.h"
#include "FirstClass.h"

TEST(TestFirstClass, TestTestedMethod) {
// Expect equality.
    FirstClass dut = FirstClass();
    EXPECT_EQ(dut.testedMethod(), 11.092);
}
TEST(TestFirstClass, TestTestedMethod2) {
// Expect equality.
    FirstClass dut = FirstClass();
    EXPECT_EQ(dut.testedMethod2(), 13.554);
}
TEST(TestFirstClass, TestTestedMethod3) {
// Expect equality.
    FirstClass dut = FirstClass();
    EXPECT_NEAR(dut.testedMethod3(), 15.1696, 0.0001);
}
TEST(TestFirstClass, TestTestedMethod4) {
// Expect equality.
    FirstClass dut = FirstClass();
    EXPECT_NEAR(dut.testedMethod4(), 10.0106, 0.0001);
}