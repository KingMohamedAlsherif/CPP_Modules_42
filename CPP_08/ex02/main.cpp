#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    // Test MutantStack
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "MutantStack contents: ";
    MutantStack<int>::iter it = mstack.begin();
    MutantStack<int>::iter ite = mstack.end();
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    // Test copy constructor
    MutantStack<int> mstack_copy(mstack);
    std::cout << "Copied MutantStack contents: ";
    for (MutantStack<int>::iter it = mstack_copy.begin(); it != mstack_copy.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Compare with std::list
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.pop_back();
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::cout << "std::list contents: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Test const iterator
    const MutantStack<int> const_mstack(mstack);
    std::cout << "Const MutantStack contents: ";
    for (MutantStack<int>::const_iter it = const_mstack.begin(); it != const_mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}