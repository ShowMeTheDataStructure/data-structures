#ifndef STACK_H_
#define STACK_H_

#include <iostream>

template <typename Type>
class Stack
{
public:
    // Constructor
    explicit Stack();

    // Destructor
    ~Stack();

    // Store new element
    void push(const Type &item);

    // Remove first element
    void pop();

    // Return first element
    Type &top() const;

    // Return true if empty, false otherwise
    bool empty() const;

    // Number of elements stored
    int size() const;
};

#endif