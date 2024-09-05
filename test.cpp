// Name: A Chao Thao
// Assignment: CS449 Sprint 0

#include "pch.h" // Import GoogleTest for my unit tests
#include "calculator.h"
using namespace std;

// Lets do 4 unit tests for all 4 operations

// Unit test 1: Addition
TEST(calculatorTests, additionTest) {
    Calculator calc;
    EXPECT_EQ(calc.addition(10, 5), 15); // 10 + 5 = 15 (True)
}

// Unit test 2: Subtraction
TEST(calculatorTests, subtractionTest) {
    Calculator calc;
    EXPECT_EQ(calc.subtraction(20, 10), 10); // 20 - 10 = 10 (True)
}

// Unit test 3: Multiplication
TEST(calculatorTests, multiplicationTest) {
    Calculator calc;
    EXPECT_EQ(calc.multiplication(9, 9), 81); // 9 * 9 = 81 (True)
}

// Unit test 4: Division
TEST(calculatorTests, divisionTest) {
    Calculator calc;
    EXPECT_EQ(calc.division(30, 2), 15); // 30 / 2 = 15 (True)

    // Test for division by zero exception
    EXPECT_THROW(calc.division(10, 0), invalid_argument);
}

// All the unit tests is true, therefore, all unit tests should be passing.