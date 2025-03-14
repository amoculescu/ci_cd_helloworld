//
// Created by andre on 07/01/2025.
//

#include "gtest/gtest.h"
#include "SecondClass.h"

TEST(TestSecondClass, TestTestedMethod)
{
    const string expected = "Base String short append short append short append";
    string testValue = "short append";

    SecondClass dut = SecondClass();
    string result = dut.testedMethod(testValue);
    EXPECT_EQ(expected, result);

    testValue = "a longer append";
    const string expected2 = "Base String a longer append";

    SecondClass dut2 = SecondClass();
    result = dut2.testedMethod(testValue);
    EXPECT_EQ(expected2, result);
}

TEST(TestSecondClass, TestTestedMethod2)
{
    SecondClass dut = SecondClass();

    EXPECT_EQ(dut.testedMethod2("Base"), true);
    EXPECT_EQ(dut.testedMethod2("foo"), false);
    EXPECT_EQ(dut.testedMethod2("string much much longer than dut string"), false);
}

TEST(TestSecondClass, TestTestedMethod3)
{
    SecondClass dut = SecondClass();

    EXPECT_EQ(dut.testedMethod2("Base"), true);
    const string expected;
    EXPECT_EQ(dut.testedMethod3(), expected);
    EXPECT_EQ(dut.testedMethod2("Base"), false);
}