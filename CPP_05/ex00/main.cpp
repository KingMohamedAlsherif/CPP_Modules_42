#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Mo("Mo", 50);
        std::cout << Mo << std::endl;
        Mo.incrementGrade();
        std::cout << "After increment: " << Mo << std::endl;
        Mo.decrementGrade();
        std::cout << "After decrement: " << Mo << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat Ahmed("Ahmed", 0);
        std::cout << Ahmed << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test grade too low
    try
    {
        Bureaucrat Ali("Ali", 151);
        std::cout << Ali << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test increment/decrement exceptions
    try
    {
        Bureaucrat hanen("hanen", 1);
        std::cout << hanen << std::endl;
        hanen.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat Jo("Jo", 150);
        std::cout << Jo << std::endl;
        Jo.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}