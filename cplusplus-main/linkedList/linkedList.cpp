#include "linkedList.h"
#include <iostream>
#include <cstring>

/**
 * @brief Construct a new LinkedList : head, tail, size
 */
template <typename Type>
LinkedList<Type>::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

// Destructor
template <typename Type>
LinkedList<Type>::~LinkedList()
{
}

// Get the value located at index
template <typename Type>
Type LinkedList<Type>::Get(const int index)
{
}

/**
 * @brief Add val at head
 * @param val : value that we want to push at head
 */
template <typename Type>
void LinkedList<Type>::AddAtHead(const Type &val)
{
    if (head == NULL && tail == NULL)
    {
        Node<Type> *node = new Node<Type>;
        node->data = val;

        head = node;
        tail = head;
    }

    else
    {
        Node<Type> *node = new Node<Type>;
        node->data = val;
        node->link = head;

        head = node;
    }

    size++;
}

// Add val at index
template <typename Type>
void LinkedList<Type>::AddAtIndex(const int index, const Type &val)
{
}

// Delete an element located at index
template <typename Type>
void LinkedList<Type>::DeleteAtIndex(const int index)
{
}

// Delete val in linked list
template <typename Type>
void LinkedList<Type>::MoveToHead(const Type &val)
{
}

// Move the first element of val to head
template <typename Type>
void LinkedList<Type>::Rotate(const int steps)
{
}

// Reduce value that repeats multiple times
template <typename Type>
void LinkedList<Type>::Reduce()
{
}

// Reverse at every k number of nodes at a time
template <typename Type>
void LinkedList<Type>::K_Reverse(const int k)
{
}

// Sort even and odd numbers separately then append
template <typename Type>
void LinkedList<Type>::EvenOddSeparateSort()
{
}

// Return the number of element in the linked list
template <typename Type>
int LinkedList<Type>::Size()
{
}

// Delete all elements from the linked list
template <typename Type>
void LinkedList<Type>::CleanUp()
{
}

/**
 * @brief print the nodes in the linked list
 * @return template <typename Type>
 */
template <typename Type>
void LinkedList<Type>::Print()
{
    Node<Type> *node = head;
    for (int i = 0; i < size; ++i)
    {
        std::cout << node->data << std::endl;
        node = node->link;
    }
}

// check the linked list empty or not
template <typename Type>
bool LinkedList<Type>::empty()
{
}
