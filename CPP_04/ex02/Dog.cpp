#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    type = other.type;
    brain = new Brain(*other.brain); // Deep copy
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain; // Free existing brain
        brain = new Brain(*other.brain); // Deep copy
        std::cout << "Dog assigned" << std::endl;
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}