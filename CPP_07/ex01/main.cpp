#include <iostream>
#include <string>
#include "iter.hpp"

// Function to print an element (const reference)
template <typename T>
void print(const T &element)
{
    std::cout << element << std::endl;
}

// Function to increment an element (non-const reference)
void increment(int &element)
{
    ++element;
}

int main(void)
{
    // Test with non-const int array
    int intArray[] = {1, 2, 3, 4, 5};
    int intLength = 5;
    std::cout << "Non-const int array before increment:" << std::endl;
    ::iter(intArray, intLength, print<int>);
    ::iter(intArray, intLength, increment);
    std::cout << "Non-const int array after increment:" << std::endl;
    ::iter(intArray, intLength, print<int>);

    // Test with const int array
    const int constIntArray[] = {10, 20, 30};
    int constIntLength = 3;
    std::cout << "Const int array:" << std::endl;
    ::iter(constIntArray, constIntLength, print<int>);

    // Test with std::string array
    std::string strArray[] = {"hello", "world", "cpp"};
    int strLength = 3;
    std::cout << "String array:" << std::endl;
    ::iter(strArray, strLength, print<std::string>);

    return 0;
}