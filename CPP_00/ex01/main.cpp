/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 05:35:56 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/02 10:42:09 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() 
{
    PhoneBook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter Command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) 
        {
            std::cout << "\nEOF detected. Exiting program." << std::endl;
            break;
        }

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.SearchContact();
        else if (command == "EXIT")
            break;
        else if (command.empty())
            std::cout << "Command cannot be empty!" << std::endl;
        else
            std::cout << "Invalid command! Please enter ADD, SEARCH, or EXIT." << std::endl;
    }

    return 0;
}
