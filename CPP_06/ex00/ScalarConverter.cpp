#include "ScalarConverter.hpp"


void ScalarConverter::convert(const std::string& literal) {
    // Step 1: Detect type
    if (literal.length() == 1) {
        // Char literal
        char c = literal[0];
        std::cout << "char: '" << c << "'\n";
        std::cout << "int: " << static_cast<int>(c) << "\n";
        std::cout << "float: " << static_cast<float>(c) << "f\n";
        std::cout << "double: " << static_cast<double>(c) << "\n";
        return;
    }

    // Check for pseudo-literals
    if (literal == "-inf" || literal == "+inf" || literal == "nan") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        if (literal == "-inf") {
            std::cout << "float: -inff\n";
            std::cout << "double: -inf\n";
        } else if (literal == "+inf") {
            std::cout << "float: +inff\n";
            std::cout << "double: +inf\n";
        } else {
            std::cout << "float: nanf\n";
            std::cout << "double: nan\n";
        }
        return;
    }
    if (literal == "-inff" || literal == "+inff" || literal == "nanf") {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << literal << "\n";
        std::cout << "double: " << literal.substr(0, literal.length() - 1) << "\n";
        return;
    }

    // Try parsing as double or float
    std::stringstream ss(literal);
    double d;
    bool is_float = (literal[literal.length() - 1] == 'f');
    if (is_float) {
        std::string tmp = literal.substr(0, literal.length() - 1);
        ss.str(tmp);
    }
    if (!(ss >> d) || !ss.eof()) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }

    // Char conversion
    if (d >= 32 && d <= 126 && d == static_cast<int>(d)) {
        std::cout << "char: '" << static_cast<char>(d) << "'\n";
    } else {
        std::cout << "char: " << (d >= 0 && d <= 127 ? "Non displayable" : "impossible") << "\n";
    }

    // Int conversion
    if (d >= INT_MIN && d <= INT_MAX && d == static_cast<int>(d)) {
        std::cout << "int: " << static_cast<int>(d) << "\n";
    } else {
        std::cout << "int: impossible\n";
    }

    // Float conversion
    std::cout << "float: " << static_cast<float>(d) << (is_float ? "f" : ".0f") << "\n";

    // Double conversion
    std::cout << "double: " << d << (is_float ? "" : ".0") << "\n";
}