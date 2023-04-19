#include "queue.h"

template <typename Type> ShowMeTheDataStructure::Queue<Type>::Queue()
{
    head = nullptr;
    tail = nullptr;
    MAX = 9;
    size = 0;
}

template <typename Type> ShowMeTheDataStructure::Queue<Type>::~Queue()
{
    CleanUp();
    delete head;
    delete tail;
}

template <typename Type>
void ShowMeTheDataStructure::Queue<Type>::push(const Type &item) 
{
    handleFullError();

    if(empty()){
        PushFirst(item);
    }
    else{
        Node<Type> *newNode = new Node<Type>;
        newNode->data = item;

        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;
        tail = newNode;
    }
    size++;
}

template <typename Type>
void ShowMeTheDataStructure::Queue<Type>::PushFirst(const Type &item)
{
    Node<Type> *newNode = new Node<Type>;
    newNode->data = item;

    head = newNode;
    tail = newNode;  
}

template <typename Type> void ShowMeTheDataStructure::Queue<Type>::pop()
{
    Node<Type> *node = tail;
    for(int i = 0; i < size; ++i)
    {
        node = node->next;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
    node = nullptr;
    std::cout << node->data << std::endl;
}

template <typename Type> // just get the front
Type &ShowMeTheDataStructure::Queue<Type>::front() const
{
    Node<Type> *node = tail;
    for(int i = 0; i < size; ++i)
    {
        node = node->next;
    }
    std::cout << node->data << std::endl;
}

template <typename Type>
bool ShowMeTheDataStructure::Queue<Type>::empty() const
{
    if(size == 0)
        return 1;
    return 0;
}

template <typename Type>
bool ShowMeTheDataStructure::Queue<Type>::full() const
{
    if (size == MAX)
        return 1;
    return 0;
}

template <typename Type>
int ShowMeTheDataStructure::Queue<Type>::queueSize() const
{
    return size;
}