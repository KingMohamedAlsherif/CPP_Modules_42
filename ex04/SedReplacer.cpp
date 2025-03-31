/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedReplacer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsheri <malsheri@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 03:31:45 by malsheri          #+#    #+#             */
/*   Updated: 2025/04/01 03:40:45 by malsheri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedReplacer.hpp"

SedReplacer::SedReplacer(const std::string &filename, const std::string &s1, std::string &s2)
{
    _s1 = s1;
    _s2 = s2;
    _filename = filename;
}

bool    SedReplacer::replaceFile()
{
    std::ifstream inputFile(_filename);
    if (!inputFile)
    {
        std::cerr << "Error: could not open file " << _filename << std::endl;
        return (false);
    }

    std::string outputFilename = _filename + ".replace";
    std::ofstream outputFile(outputFilename);
    if (!outputFile)
    {
        std::cerr << "Error: could not open file " << outputFilename << std::endl;
        return (false);
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos)
        {
            line.erase(pos, _s1.length());
            line.insert(pos, _s2);
            pos += _s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return (true);
}