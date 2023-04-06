#include "linkedList.h"
#include <iostream>
#include <cstring>

/**
 * @brief Construct a new LinkedList : head, size
 */
template <typename Type>
LinkedList<Type>::LinkedList()
{
    head = NULL;
    size = 0;
}

// Destructor
template <typename Type>
LinkedList<Type>::~LinkedList()
{
}

/**
 * @brief Get the value located at index
 * @param index
 * @return the value located at index in linked list
 */
template <typename Type>
Type LinkedList<Type>::Get(const int index)
{
    if (index < size)
    {
        Node<Type> *node = head;
        for (int i = 0; i < index; ++i)
            node = node->link;

        return node->data;
    }
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
    if (index == 0)
    {
        AddAtHead(val);
        return;
    }

    if (index <= size)
    {
        Node<Type> *node = new Node<Type>;
        node->data = val;

        Node<Type> *prev = head;
        for (int i = 0; i < index - 1; ++i)
        {
            prev = prev->link;
        }

        node->link = prev->link;
        prev->link = node;

        size++;
    }
}

// Delete an element located at index
template <typename Type>
void LinkedList<Type>::DeleteAtIndex(const int index)
{
}

/**
 * @brief Delete val in linked list (if val exists, the first val is deleted)
 * @param val : the value we want to delete
 */
// Delete val in linked list
template <typename Type>
void LinkedList<Type>::DeleteValue(const Type &val)
{
    if (head->data == val)
    {
        if (size == 1)
        {
            head = NULL;
        }
        else
        {
            Node<Type> *node = head;
            head = head->link;
            node = NULL;
        }

        size--;
        return;
    }

    Node<Type> *prev = head;
    Node<Type> *curr = prev->link;

    while (prev->link)
    {
        if (curr->data == val)
        {
            prev->link = curr->link;
            curr = NULL;

            size--;
            break;
        }

        prev = curr;
        curr = curr->link;
    }
}

// Move the first element of val to head
template <typename Type>
void LinkedList<Type>::MoveToHead(const Type &val)
{
}

// Rotate the linked list right by steps times
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

/**
 * @brief Return the number of element in the linked list
 * @return the size of linked list (the number of nodes in the linked list)
 */
template <typename Type>
int LinkedList<Type>::Size()
{
    return size;
}

// Delete all elements from the linked list
template <typename Type>
void LinkedList<Type>::CleanUp()
{
}

/**
 * @brief print the nodes in the linked list
 * @return Outputs node data one by one to the command line
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

/**
 * @brief Check if linked list is empty
 * @return true if empty, false otherwise
 */
template <typename Type>
bool LinkedList<Type>::empty()
{
    if (size == 0)
        return true;
    else
        return false;
}
