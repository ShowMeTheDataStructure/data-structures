#ifndef STACK_H_
#define STACK_H_

#include "../linkedList/linkedList.h"
#include <iostream>

namespace ShowMeTheDataStructure
{
  template <typename Type>
  class Stack
  {
  private:
    LinkedList<Type> st;

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
    const Type top();

    // Return true if empty, false otherwise
    bool empty();

    // Number of elements stored
    int size();
  };
}; // namespace ShowMeTheDataStructure

#endif