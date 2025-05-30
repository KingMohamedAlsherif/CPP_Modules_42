#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Basic test from the example
    Span sp = Span(5);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test with full capacity
    try {
        sp.addNumber(42); // Should throw
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test with insufficient numbers
    Span sp2 = Span(1);
    try {
        sp2.addNumber(1);
        sp2.shortestSpan(); // Should throw
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test with 10,000 numbers
    Span large_sp(10000);
    std::srand(static_cast<unsigned int>(std::time(0)));
    try {
        for (int i = 0; i < 10000; ++i) {
            large_sp.addNumber(std::rand() % 100000);
        }
        std::cout << "Large Span - Shortest span: " << large_sp.shortestSpan() << std::endl;
        std::cout << "Large Span - Longest span: " << large_sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}