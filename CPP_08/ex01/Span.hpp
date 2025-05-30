#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span {
private:
    std::vector<int> _numbers;
    unsigned int _maxSize;

public:
    // Orthodox Canonical Form
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    // Member functions
    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
};

#endif