/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 04:07:37 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 04:21:26 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl hala;

    hala.complain("DEBUG");
    hala.complain("INFO");
    hala.complain("WARNING");
    hala.complain("ERROR");

    return (0);
}