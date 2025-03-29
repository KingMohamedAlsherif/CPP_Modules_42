// main.cpp
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;

    Zombie* horde = zombieHorde(N, "Zombieeee");

    if (!horde)
        return (1);
    delete[] horde;

    return 0;
}
