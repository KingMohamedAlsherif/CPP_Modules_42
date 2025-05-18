/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arashido <avazbekrashidov6@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:41:45 by arashido          #+#    #+#             */
/*   Updated: 2024/03/14 15:06:08 by arashido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Bureaucrat B("john", 39);
		ShrubberyCreationForm A("target");
		B.signForm(A);
		B.executeForm(A);
	}
	{
		Bureaucrat B("john", 19);
		RobotomyRequestForm A("target");
		B.signForm(A);
		B.executeForm(A);
	}
	{
		Bureaucrat B("john",3);
		PresidentialPardonForm A("target");
		B.signForm(A);
		B.executeForm(A);
	}
}