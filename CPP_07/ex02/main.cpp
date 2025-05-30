#include <iostream>
#include <string>
#include <stdexcept>
#include "Array.hpp"

int main()
{
    // Test default constructor and empty array
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    // Test size constructor with int
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        intArray[i] = i + 1; // Assign 1, 2, 3, 4, 5
    }
    std::cout << "Int array: ";
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Array<int> intCopy(intArray);
    intCopy[0] = 100; // Modify copy, original unaffected
    std::cout << "Original after copy modification: " << intArray[0] << std::endl;
    std::cout << "Copy: " << intCopy[0] << std::endl;

    // Test assignment operator
    Array<int> intAssign(3);
    intAssign = intArray; // Deep copy
    intAssign[1] = 200;   // Modify assigned array
    std::cout << "Original after assignment modification: " << intArray[1] << std::endl;
    std::cout << "Assigned: " << intAssign[1] << std::endl;

    // Test const array
    const Array<int> constArray(intArray);
    std::cout << "Const array: ";
    for (unsigned int i = 0; i < constArray.size(); ++i)
    {
        std::cout << constArray[i] << " ";
    }
    std::cout << std::endl;

    // Test bounds checking
    try
    {
        intArray[10] = 0; // Out of bounds
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    // Test with std::string
    Array<std::string> strArray(3);
    strArray[0] = "hello";
    strArray[1] = "world";
    strArray[2] = "cpp";
    std::cout << "String array: ";
    for (unsigned int i = 0; i < strArray.size(); ++i)
    {
        std::cout << strArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}