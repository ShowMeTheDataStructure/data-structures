#include "queue.h"

template <typename Type>
ShowMeTheDataStructure::Queue<Type>::Queue() {}

template <typename Type>
ShowMeTheDataStructure::Queue<Type>::~Queue()
{
    q.CleanUp();
}

template <typename Type>
void ShowMeTheDataStructure::Queue<Type>::push(const Type &item)
{
    q.AddAtTail(item);
}

template <typename Type>
void ShowMeTheDataStructure::Queue<Type>::pop()
{
    q.DeleteAtIndex(0);
}

template <typename Type>
const Type ShowMeTheDataStructure::Queue<Type>::front()
{
    return q.Get(0);
}

template <typename Type>
bool ShowMeTheDataStructure::Queue<Type>::empty()
{
    return q.Empty();
}

template <typename Type>
int ShowMeTheDataStructure::Queue<Type>::size()
{
    return q.Size();
}