#include <iostream>

int     main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string    *ptr = &brain;
    std::string     &ref = brain;

    std::cout << "Memory address of the string variable: " << &brain << std::endl;
    std::cout << "Memory address of the string pointer : " << ptr << std::endl;
    std::cout << "Memory address of the string refrence: " << &ref << std::endl;

    std::cout << "Value of the string   : " << brain << std::endl;
    std::cout << "Value pointed by ptr   : " << *ptr << std::endl;
    std::cout << "Value referenced by ref   : " << ref << std::endl;

    return (0);
}