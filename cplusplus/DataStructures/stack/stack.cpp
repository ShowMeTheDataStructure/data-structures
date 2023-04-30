#include "stack.h"

template <typename Type> ShowMeTheDataStructure::Stack<Type>::Stack() {}

template <typename Type> ShowMeTheDataStructure::Stack<Type>::~Stack() {}

template <typename Type>
void ShowMeTheDataStructure::Stack<Type>::push(const Type &item) {
    stack.AddAtHead(item);
}

template <typename Type> void ShowMeTheDataStructure::Stack<Type>::pop() {
    stack.DeleteAtIndex(0);
}

template <typename Type> Type ShowMeTheDataStructure::Stack<Type>::top() {
    return stack.Get(0);
}

template <typename Type> bool ShowMeTheDataStructure::Stack<Type>::empty() {
    return stack.Empty();
}

template <typename Type> int ShowMeTheDataStructure::Stack<Type>::size() {
    return stack.Size();
}
