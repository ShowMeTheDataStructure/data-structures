#include "stack.h"

template <typename Type>
ShowMeTheDataStructure::Stack<Type>::Stack()
{
}

template <typename Type>
ShowMeTheDataStructure::Stack<Type>::~Stack()
{
    st.CleanUp();
}

template <typename Type>
void ShowMeTheDataStructure::Stack<Type>::push(const Type &item)
{
    st.AddAtHead(item);
}

template <typename Type>
void ShowMeTheDataStructure::Stack<Type>::pop()
{
    st.DeleteAtIndex(0);
}

template <typename Type>
const Type ShowMeTheDataStructure::Stack<Type>::top()
{
    return st.Get(0);
}

template <typename Type>
bool ShowMeTheDataStructure::Stack<Type>::empty()
{
    return st.Empty();
}

template <typename Type>
int ShowMeTheDataStructure::Stack<Type>::size()
{
    return st.Size();
}
