/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 03:33:39 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 03:33:40 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string  name);
    ~Zombie();
    void announce() const;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
#endif