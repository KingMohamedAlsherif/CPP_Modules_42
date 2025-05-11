#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    // Test 1: Sample code (Polymorphism and Abstract Class)
    std::cout << "=== Test 1: Polymorphism ===" << std::endl;
    // Animal* meta = new Animal(); // Should not compile
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Should output "Meow!"
    j->makeSound(); // Should output "Woof!"
    delete j;
    delete i;

    // Test 2: Deep Copy for Dog and Cat
    std::cout << "\n=== Test 2: Deep Copy ===" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "Chase tail");
    Dog dog2(dog1); // Copy constructor
    dog2.getBrain()->setIdea(0, "Bark loudly");
    std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    Cat cat1;
    cat1.getBrain()->setIdea(0, "Climb tree");
    Cat cat2 = cat1; // Copy assignment
    cat2.getBrain()->setIdea(0, "Scratch couch");
    std::cout << "Cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    return 0;
}