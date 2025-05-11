#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Test 1: Sample code from exercise
    std::cout << "=== Test 1: Correct Polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Should output "Meow!"
    j->makeSound(); // Should output "Woof!"
    meta->makeSound(); // Should output "Generic animal sound"
    delete meta;
    delete j;
    delete i;

    // Test 2: Wrong hierarchy (no polymorphism)
    std::cout << "\n=== Test 2: Incorrect Polymorphism ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Should output "Wrong animal sound" (no override)
    wrongMeta->makeSound(); // Should output "Wrong animal sound"
    delete wrongMeta;
    delete wrongCat;

    // Test 3: Copy constructor and assignment
    std::cout << "\n=== Test 3: Copy and Assignment ===" << std::endl;
    Dog dog1;
    Dog dog2(dog1); // Copy constructor
    Dog dog3;
    dog3 = dog1; // Copy assignment
    dog1.makeSound();
    dog2.makeSound();
    dog3.makeSound();

    // Test 4: Array of Animals
    std::cout << "\n=== Test 4: Array of Animals ===" << std::endl;
    const int size = 4;
    Animal* animals[size];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    for (int k = 0; k < size; ++k) {
        std::cout << "Animal " << k << " type: " << animals[k]->getType() << std::endl;
        animals[k]->makeSound();
    }
    for (int k = 0; k < size; ++k) {
        delete animals[k];
    }

    return 0;
}