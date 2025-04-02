/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 03:32:08 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 03:32:09 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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