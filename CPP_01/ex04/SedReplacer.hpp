#ifndef SED_REPLACER_HPP
#define SED_REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class SedReplacer {
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

public:
    SedReplacer(const std::string &filename, const std::string &s1, std::string &s2);
    bool replaceFile();
};

#endif
