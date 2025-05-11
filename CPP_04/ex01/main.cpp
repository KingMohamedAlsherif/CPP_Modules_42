#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    // Test 1: Sample code from exercise (Polymorphism and Memory Management)
    std::cout << "=== Test 1: Basic Polymorphism ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound(); // Should output "Woof!"
    i->makeSound(); // Should output "Meow!"
    delete j; // Should not create a leak
    delete i;

    // Test 2: Deep Copy for Dog and Cat
    std::cout << "\n=== Test 2: Deep Copy ===" << std::endl;
    // Dog deep copy test
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase tail");
    Dog dog2(dog1); // Copy constructor
    dog2.getBrain()->setIdea(0, "Bark loudly");
    std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    // Cat deep copy test
    Cat cat1;
    cat1.getBrain()->setIdea(0, "Climb tree");
    Cat cat2 = cat1; // Copy assignment
    cat2.getBrain()->setIdea(0, "Scratch couch");
    std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    return 0;
}