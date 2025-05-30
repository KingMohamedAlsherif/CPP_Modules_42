#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
private:
    T *_data;           // Pointer to the dynamic array
    unsigned int _size; // Number of elements

public:
    Array();

    Array(unsigned int n);

    Array(const Array &other);

    Array &operator=(const Array &other);
    ~Array();

    T &operator[](int index);

    const T &operator[](int index) const;

    unsigned int size() const;
};

// Include implementation file
#include "Array.tpp"

#endif