/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:40:35 by malsheri          #+#    #+#             */
/*   Updated: 2025/05/19 13:43:09 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    Intern intern;
    AForm* form = NULL;
    Bureaucrat bob("Bob", 50);

    // Test creating valid forms
    try {
        form = intern.makeForm("robotomy request", "Bender");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        form = intern.makeForm("shrubbery creation", "Home");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        form = intern.makeForm("presidential pardon", "Zaphod");
        if (form) {
            std::cout << *form << std::endl;
            bob.signForm(*form);
            bob.executeForm(*form);
            delete form;
        }
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test invalid form name
    try {
        form = intern.makeForm("invalid form", "Nobody");
        if (form) {
            std::cout << *form << std::endl;
            delete form;
        }
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
} 