#include <iostream>
#include "Calculator.h"

int main() {
    std::cout << "Finding possibly products of 4 and 2" << std::endl;
    std::cout << "Add: " << Calculator::add(4,2) << std::endl;
    std::cout << "Sub: " << Calculator::sub(4,2) << std::endl;
    std::cout << "Mult: " << Calculator::mult(4,2) << std::endl;
    std::cout << "Div: " << Calculator::div(4,2) << std::endl;
    return 0;
}