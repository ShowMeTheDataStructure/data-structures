#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

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

template <typename Type> class LinkedList {
  private:
    Node<Type> *head;
    Node<Type> *tail;
    int size;

    void handleIndexError(const int index, const int cmp) {
        try {
            if (index > cmp)
                throw std::string("index error list index out of range.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

    void handleEmptyError() {
        try {
            if (Empty())
                throw std::string("linked list is empty. Please check again.");
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

  public:
    // constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Get the value located at index
    Type Get(const int index);

    // Add val at head
    void AddAtHead(const Type &val);

    // Add val at tail
    void AddAtTail(const Type &val);

    // Add val at index
    void AddAtIndex(const int index, const Type &val);

    // Delete an element located at index
    void DeleteAtIndex(const int index);

    // Delete val in linked list
    void DeleteValue(const Type &val);

    // Move the first element of val to head
    void MoveToHead(const Type &val);

    // Rotate the linked list right by steps times
    void Rotate(const int steps);

    // Reduce value that repeats multiple times
    void Reduce(const int repeats);

    // Reverse at every k number of nodes at a time
    void K_Reverse(const int k);

    // Sort even and odd numbers separately then append
    void EvenOddSeparateSort();

    // Return the number of element in the linked list
    int Size();

    // Delete all elements from the linked list
    void CleanUp();

    // Print the list
    void Print();

    // check the linked list empty or not
    bool Empty();

    // Swap two node's value
    void Swap(const int index1, const int index2);
};
} // namespace ShowMeTheDataStructure
#endif