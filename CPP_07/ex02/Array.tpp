#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

// Default constructor: empty array
template <typename T>
Array<T>::Array() : _data(0), _size(0) {}

// Constructor with size: default-initialized elements
template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n) {}

// Copy constructor: deep copy
template <typename T>
Array<T>::Array(const Array &other) : _data(new T[other._size]), _size(other._size)
{
    for (unsigned int i = 0; i < _size; ++i)
    {
        _data[i] = other._data[i];
    }
}

// Assignment operator: deep copy, handle self-assignment
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] _data; // Free existing memory
        _size = other._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
        {
            _data[i] = other._data[i];
        }
    }
    return *this;
}

// Destructor: free memory
template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}

// Subscript operator (non-const): bounds checking
template <typename T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || static_cast<unsigned int>(index) >= _size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return _data[index];
}

// Subscript operator (const): bounds checking
template <typename T>
const T &Array<T>::operator[](int index) const
{
    if (index < 0 || static_cast<unsigned int>(index) >= _size)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return _data[index];
}

// Size function: return number of elements
template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

#endif