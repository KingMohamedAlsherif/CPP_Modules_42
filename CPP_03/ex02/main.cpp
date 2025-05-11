#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Test FragTrap construction and destruction
    std::cout << "=== Testing FragTrap Construction/Destruction ===" << std::endl;
    FragTrap frag("Hero");

    
    // Test copy constructor
    std::cout << "\n=== Testing FragTrap Copy Constructor ===" << std::endl;
    FragTrap fragCopy(frag);

    // Test copy assignment
    std::cout << "\n=== Testing FragTrap Copy Assignment ===" << std::endl;
    FragTrap fragAssign("Temp");
    fragAssign = frag;

    // Test inherited methods
    std::cout << "\n=== Testing FragTrap Inherited Methods ===" << std::endl;
    frag.attack("Enemy");
    frag.takeDamage(30);
    frag.beRepaired(20);

    // Test special ability
    std::cout << "\n=== Testing FragTrap Special Ability ===" << std::endl;
    frag.highFivesGuys();

    // Test ScavTrap for compatibility
    std::cout << "\n=== Testing ScavTrap for Compatibility ===" << std::endl;
    ScavTrap scav("Guard");
    scav.attack("Enemy");
    scav.guardGate();

    // Test ClapTrap for compatibility
    std::cout << "\n=== Testing ClapTrap for Compatibility ===" << std::endl;
    ClapTrap clap("Basic");
    clap.attack("Enemy");

    return 0;
}