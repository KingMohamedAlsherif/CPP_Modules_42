#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}

void    HumanB::attack()
{
    if (weapon == NULL)
    {
        std::cout << name << " has no weapon" << std::endl;
        return ;
    }
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}