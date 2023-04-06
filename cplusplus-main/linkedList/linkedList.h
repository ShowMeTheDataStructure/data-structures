#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <typeinfo>
#include <iostream>

template <typename Type>
struct Node
{
    Type data;
    Node *link;
};

template <typename Type>
class LinkedList
{
private:
    Node<Type> *head;
    Node<Type> *tail;
    int count;

public:
    // constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Get the value located at index
    Type Get(const int index);

    // Add val at head
    void AddAtHead(const Type &val);

    // Add val at index
    void AddAtIndex(const int index, const Type &val);

    // Delete an element located at index
    void DeleteAtIndex(const int index);

    // Delete val in linked list
    void MoveToHead(const Type &val);

    // Move the first element of val to head
    void Rotate(const int steps);

    // Reduce value that repeats multiple times
    void Reduce();

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
    bool empty();
};

#endif