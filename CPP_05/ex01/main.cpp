/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:51:51 by malsheri          #+#    #+#             */
/*   Updated: 2025/05/16 16:52:30 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    // Test valid form creation and signing
    try {
        Bureaucrat Mo("Mo", 50);
        Form contract("Contract", 100, 80);
        std::cout << Mo << std::endl;
        std::cout << contract << std::endl;
        Mo.signForm(contract);
        std::cout << contract << std::endl;
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test signing with insufficient grade
    try {
        Bureaucrat ali("Ali", 120);
        Form important("Important", 50, 20);
        std::cout << ali << std::endl;
        std::cout << important << std::endl;
        ali.signForm(important);
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test invalid form grades
    try {
        Form invalid("Invalid", 0, 50);
        std::cout << invalid << std::endl;
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        Form invalid("Invalid", 151, 50);
        std::cout << invalid << std::endl;
    } catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}