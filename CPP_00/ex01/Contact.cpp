/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:39:45 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/02 10:39:46 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setContact() {
    std::cout << "Enter Your First Name : ";
    std::getline(std::cin, firstName);
    std::cout << "Enter Your Last Name : ";
    std::getline(std::cin, lastName);
    std::cout << "Enter Your Nick Name : ";
    std::getline(std::cin, nickName);
    std::cout << "Enter Your Phone Number : ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter Your Darkest Secret : ";
    std::getline(std::cin, darkestSecret);
}

void Contact::displayShort(int index) {
    std::cout << index << " | " 
              << firstName.substr(0, 9) << (firstName.length() > 9 ? "." : " ") << " | "
              << lastName.substr(0, 9) << (lastName.length() > 9 ? "." : " ") << " | "
              << nickName.substr(0, 9) << (nickName.length() > 9 ? "." : " ") << std::endl;
}

void    Contact::displayFull()
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nick Name: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}