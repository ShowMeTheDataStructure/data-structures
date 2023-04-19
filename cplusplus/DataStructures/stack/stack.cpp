#include "stack.h"

template <typename Type> ShowMeTheDataStructure::Stack<Type>::Stack()
{
    head = nullptr;
    tail = nullptr;
    MAX = 9;
    size = 0;
}

template <typename Type> ShowMeTheDataStructure::Stack<Type>::~Stack()
{
    CleanUp();
    delete head;
    delete tail;
}

template <typename Type>
void ShowMeTheDataStructure::Stack<Type>::push(const Type &item)
{
   handleFullError();

    if(empty()){
        PushFirst(item);
    }
    else{
        Node<Type> *newNode = new Node<Type>;
        newNode->data = item;

        head->prev = newNode;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head = newNode;
    }
    size++;
}

template <typename Type>
void ShowMeTheDataStructure::Stack<Type>::PushFirst(const Type &item)
{
    Node<Type> *newNode = new Node<Type>;
    newNode->data = item;

    head = newNode;
    tail = newNode;  
}

template <typename Type> void ShowMeTheDataStructure::Stack<Type>::pop()
{
    Node<Type> *node = head;
    std::cout << node->data << std::endl;

    node->prev->next = node->next;
    node->next->prev = node->prev;
    node = nullptr;
}

template <typename Type>
Type &ShowMeTheDataStructure::Stack<Type>::top() const
{
    Node<Type> *node = head;
    std::cout << node->data << std::endl;
}

template <typename Type>
bool ShowMeTheDataStructure::Stack<Type>::empty() const
{
    if(size == 0)
        return 1;
    return 0;
}

template <typename Type>
bool ShowMeTheDataStructure::Stack<Type>::full() const
{
    if (size == MAX)
        return 1;
    return 0;
}

template <typename Type>
int ShowMeTheDataStructure::Stack<Type>::size() const
{
 return size;
}
