#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1("Batman");
    ClapTrap claptrap2("Joker");

    claptrap1.attack("Joker");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);


    // Test 2: Energy depletion
    ClapTrap clap2("Worker");
    for (int i = 0; i < 11; ++i) {
        clap2.attack("Target");
    }

    // Test 3: Copy constructor and assignment
    ClapTrap clap3("Original");
    ClapTrap clap4(clap3); // Copy constructor
    ClapTrap clap5("Temp");
    clap5 = clap3;
    return 0;
}