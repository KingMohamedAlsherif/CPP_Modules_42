/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:30:48 by malsheri          #+#    #+#             */
/*   Updated: 2025/05/28 17:36:24 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void    swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>

const T &min(const T &a, const T &b)
{
    if (a <= b)
        return a;
    return b;
}

template <typename T>

const T &max(const T &a, const T &b)
{
    if (a >= b)
        return a;
    return b;
}

#endif