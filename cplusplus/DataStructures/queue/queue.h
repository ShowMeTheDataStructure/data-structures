#ifndef QUEUE_H
#define QUEUE_H

#include "../linkedList/linkedList.h"
#include <iostream>

namespace ShowMeTheDataStructure
{
  template <typename Type>
  class Queue
  {
  private:
    LinkedList<Type> q;

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
    const Type front();

    // Return true if empty, false otherwise
    bool empty();

    // Number of elements stored
    int size();
  };
}; // namespace ShowMeTheDataStructure

#endif