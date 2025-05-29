#include "ScalarConverter.hpp"
int main() {
    ScalarConverter::convert("0");
    std::cout << "\n";
    ScalarConverter::convert("nan");
    std::cout << "\n";
    ScalarConverter::convert("42.0f");
    std::cout << "\n";
    ScalarConverter::convert("a");
    return 0;
}