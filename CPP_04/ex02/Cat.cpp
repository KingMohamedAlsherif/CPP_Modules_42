#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    type = other.type;
    brain = new Brain(*other.brain); // Deep copy
    std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain; // Free existing brain
        brain = new Brain(*other.brain); // Deep copy
        std::cout << "Cat assigned" << std::endl;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}