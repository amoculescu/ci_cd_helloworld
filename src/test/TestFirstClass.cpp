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