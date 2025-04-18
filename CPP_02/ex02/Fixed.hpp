#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &copy);
    Fixed& operator=(const Fixed& copy);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);

    Fixed(const int value);
    Fixed(const float value);
    float toFloat() const;
    int toInt() const;

    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    
    // Increment and decrement operators
    Fixed& operator++(); // Pre-increment
    Fixed operator++(int); // Post-increment
    Fixed& operator--(); // Pre-decrement
    Fixed operator--(int); // Post-decrement

    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


#endif