/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:40:42 by malsheri          #+#    #+#             */
/*   Updated: 2025/05/19 13:40:43 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern 
{
public:
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &src);

    AForm *makeForm(const std::string &formName, const std::string &target);
};

#endif