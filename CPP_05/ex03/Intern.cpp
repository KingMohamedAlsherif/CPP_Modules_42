/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:40:38 by malsheri          #+#    #+#             */
/*   Updated: 2025/05/19 13:40:39 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
}


static AForm *createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm *createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

static AForm *createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

// Form lookup table
struct FormEntry
{
    std::string name;
    AForm *(*creator)(const std::string &);
};

static const FormEntry formTable[] = {
    {"shrubbery creation", createShrubbery},
    {"robotomy request", createRobotomy},
    {"presidential pardon", createPresidential}};

static const int formTableSize = sizeof(formTable) / sizeof(formTable[0]);

// makeForm implementation
AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    for (int i = 0; i < formTableSize; ++i)
    {
        if (formName == formTable[i].name)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return formTable[i].creator(target);
        }
    }
    std::cout << "Error: Unknown form name: " << formName << std::endl;
    return NULL;
}