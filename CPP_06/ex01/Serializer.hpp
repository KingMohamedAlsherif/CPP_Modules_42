#include <iostream>
#include <stdint.h>

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &src);
        ~Serializer();

    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif