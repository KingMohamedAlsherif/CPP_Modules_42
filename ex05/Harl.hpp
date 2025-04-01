/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 04:00:01 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 04:00:07 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>
#include <string>

class Harl
{

private:
    void  debug();
    void  info();
    void  warning();
    void  error();

public:
    void complain(std::string level);
};

#endif