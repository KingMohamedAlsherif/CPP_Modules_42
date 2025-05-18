#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target_(other.target_) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    AForm::operator=(other);
    if (this != &other) {
        target_ = other.target_;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeAction() const {
    std::cout << "*drilling noises*" << std::endl;
    if (std::rand() % 2) {
        std::cout << target_ << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy on " << target_ << " failed." << std::endl;
    }
}