#include "ClapTrap.hpp"


// Default constructor
ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " is constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap " << this->name << " copy constructed." << std::endl;
    *this = other;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap " << this->name << " assigned." << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot attack! Need Points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0)
    {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " damage! Hit points left: " << hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points! Hit points now: " << hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot be repaired! Need Points!" << std::endl;
    }
}

