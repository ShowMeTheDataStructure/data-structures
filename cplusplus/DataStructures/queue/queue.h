#ifndef QUEUE_H
#define QUEUE_H

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

template <typename Type> class Queue {
  private:
    Node<Type> *head;
    Node<Type> *tail;
    int size;

    void handleFullError() {
        try {
            if (full())
                throw std::string("Queue is full. Please check again.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

    void handleEmptyError() {
        try {
            if (Empty())
                throw std::string("Queue is empty. Please check again.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }


  public:
    // Constructor
    explicit Queue();

    // Destructor
    ~Queue();

    // Store new element
    void push(const Type &item);

    // Remove first element
    void pop();

    // Push when the Queue is empty
    void PushFirst(const Type &item);

    // Return first element
    Type &front() const;

    // Return true if empty, false otherwise
    bool empty() const;

    // Return true if full, false otherwise
    bool full() const;

    // Number of elements stored
    int queueSize() const;
};
} // namespace ShowMeTheDataStructure

#endif