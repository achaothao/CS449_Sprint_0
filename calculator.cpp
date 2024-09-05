// Name: A Chao Thao
// Assignment: CS449 Sprint 0

#include "pch.h" // Import GoogleTest for my unit tests
#include "calculator.h" 
using namespace std;

// Add 2 integers and return the sum
int Calculator::addition(int num1, int num2) {
    return num1 + num2;
}

// Subtract 2 integers and return the difference
int Calculator::subtraction(int num1, int num2) {
    return num1 - num2;
}

// Multiply 2 integers and return the product
int Calculator::multiplication(int num1, int num2) {
    return num1 * num2;
}

// Divide 2 integers and return the quotient if num2 =! 0
int Calculator::division(int num1, int num2) {
    if (num2 == 0) {
        throw invalid_argument("Undefine: Divide by 0.");
    }
    return num1 / num2;
}