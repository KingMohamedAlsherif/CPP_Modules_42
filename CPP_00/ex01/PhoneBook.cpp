/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:39:59 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/02 10:40:00 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    count = 0;
    oldest = 0;
}

void PhoneBook::addContact() {
    if (count < 8) {
        contacts[count].setContact();
        count++;
    } else {
        contacts[oldest].setContact();
        oldest = (oldest + 1) % 8;
    }
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::SearchContact() {
    if (count == 0) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    
    std::cout << "Index | First Name | Last Name  | Nickname  " << std::endl;
    for (int i = 0; i < count; i++) {
        contacts[i].displayShort(i);
    }

    std::string index;
    std::cout << "Enter the index of the contact From The list: ";
    if (!std::getline(std::cin, index)) {
        return;
    }

    while (true) {
        if (index.length() == 1 && index[0] >= '0' && index[0] <= '7') {
            int i = index[0] - '0';
            if (i < count) {
                contacts[i].displayFull();
                break;
            } else {
                std::cout << "Contact does not exist!" << std::endl << std::endl;
                break;
            }
        } else {
            std::cout << "Invalid index!" << std::endl << std::endl;
            break;
        }
    }
}
