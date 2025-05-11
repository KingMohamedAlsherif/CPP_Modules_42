#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
    FragTrap(std::string name);              // Constructor
    FragTrap(const FragTrap& other);         // Copy constructor
    FragTrap& operator=(const FragTrap& other); // Copy assignment operator
    ~FragTrap();                             // Destructor

    void highFivesGuys(void);                // Special ability
};

#endif