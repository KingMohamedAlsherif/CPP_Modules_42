#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <cctype>
#include <cmath>

class ScalarConverter {
public:
    static void convert(const std::string& literal);

private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter& operator=(const ScalarConverter&);
};
#endif