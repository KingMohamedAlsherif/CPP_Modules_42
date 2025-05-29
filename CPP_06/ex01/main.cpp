#include "Serializer.hpp"

int main(void)
{
    Data data;
    data.s1 = "Hello";
    data.n = 42;
    data.s2 = "World";

    uintptr_t serialized = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(serialized);

    std::cout << "s1: " << deserialized->s1 << std::endl;
    std::cout << "n: " << deserialized->n << std::endl;
    std::cout << "s2: " << deserialized->s2 << std::endl;

    return 0;
}