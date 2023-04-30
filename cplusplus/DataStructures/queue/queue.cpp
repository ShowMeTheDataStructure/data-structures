#include "queue.h"

template <typename Type> ShowMeTheDataStructure::Queue<Type>::Queue() {}

template <typename Type> ShowMeTheDataStructure::Queue<Type>::~Queue() {
    queue.CleanUp();
}

template <typename Type>
void ShowMeTheDataStructure::Queue<Type>::push(const Type &item) {
    queue.AddAtTail(item);
}

template <typename Type> void ShowMeTheDataStructure::Queue<Type>::pop() {
    queue.DeleteAtIndex(0);
}

template <typename Type>
const Type ShowMeTheDataStructure::Queue<Type>::front() {
    return queue.Get(0);
}

template <typename Type> bool ShowMeTheDataStructure::Queue<Type>::empty() {
    return queue.Empty();
}

template <typename Type> int ShowMeTheDataStructure::Queue<Type>::size() {
    return queue.Size();
}