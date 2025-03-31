/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 03:31:42 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 03:53:34 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedReplacer.hpp"

int     main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error : Use ./replace filename string_1 string_2" << std::endl;
        return (1);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    SedReplacer sedReplacer(filename, s1, s2);
    if (!sedReplacer.replaceFile())
        return (1);
    
    std::cout << "File " << filename << " has been successfully replaced" << std::endl;
    return (0);
}