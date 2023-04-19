#ifndef STACK_H_
#define STACK_H_

#include <algorithm>
#include <cstring>
#include <iostream>
#include <typeinfo>

namespace ShowMeTheDataStructure {
template <typename Type> struct Node {
  Type data;
  Node *prev;
  Node *next;

  Node() {
    prev = nullptr;
    next = nullptr;
  }
};
template <typename Type> class Stack {
  private:
    Node<Type> *head; // Head is TOP
    Node<Type> *tail; // Tail is BOTTOM
    int size;

    void handleFullError() {
        try {
            if (full())
                throw std::string("Stack is full. Please check again.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

    void handleEmptyError() {
        try {
            if (Empty())
                throw std::string("Stack is empty. Please check again.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

  public:
    // Constructor
    explicit Stack();

    // Destructor
    ~Stack();

    // Store new element
    void push(const Type &item);

    // Remove first element
    void pop();

    // Push when the Queue is empty
    void PushFirst(const Type &item);

    // Return first element
    Type &top() const;

    // Return true if full, false otherwise
    bool full() const;

    // Return true if empty, false otherwise
    bool empty() const;

    // Number of elements stored
    int size() const;
};
} // namespace ShowMeTheDataStructure

#endif