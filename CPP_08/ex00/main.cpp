#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main() {
    // Test with std::vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    std::cout << "Testing with vector: [1, 2, 3, 4]\n";
    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found value: " << *it << " at position: " 
                  << (it - vec.begin()) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        easyfind(vec, 5); // Should throw exception
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test with std::list
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    std::cout << "\nTesting with list: [10, 20, 30]\n";
    try {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        easyfind(lst, 40); // Should throw exception
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}