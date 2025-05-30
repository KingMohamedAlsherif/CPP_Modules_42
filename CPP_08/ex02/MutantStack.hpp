#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {
public:
  MutantStack() {}
  MutantStack(const MutantStack& object) : std::stack<T>(object) {}

  MutantStack& operator=(const MutantStack& other) {
    if (this != &other)
        this->c = other.c;
    return *this;
  }

  ~MutantStack() {}

  typedef typename std::stack<T>::container_type::iterator iter;
  typedef typename std::stack<T>::container_type::const_iterator const_iter;

  iter begin() { return this->c.begin(); }
  iter end() { return this->c.end(); }

  const_iter begin() const { return this->c.begin(); }
  const_iter end() const { return this->c.end(); }
};

#endif