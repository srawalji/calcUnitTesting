#include "gtest/gtest.h"
#include "Calculator.h"

TEST(CalculatorTest, test1) {
    EXPECT_EQ (Calculator::add (4,2), 6);
    EXPECT_EQ (Calculator::sub (4,2), 2);
    EXPECT_EQ (Calculator::mult (4,2), 8);
    EXPECT_EQ (Calculator::div (4,2), 2);
}