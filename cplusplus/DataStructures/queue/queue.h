#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

namespace ShowMeTheDataStructure {
template <typename Type> class Queue {
  public:
    // Constructor
    explicit Queue();

    // Destructor
    ~Queue();

    // Store new element
    void push(const Type &item);

    // Remove first element
    void pop();

    // Return first element
    Type &front() const;

    // Return true if empty, false otherwise
    bool empty() const;

    // Number of elements stored
    int size() const;
};
} // namespace ShowMeTheDataStructure

#endif