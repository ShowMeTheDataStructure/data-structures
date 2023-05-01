#include "linkedList.h"

/**
 * @brief Construct a new LinkedList : head, size
 */
template <typename Type>
ShowMeTheDataStructure::LinkedList<Type>::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

/**
 * @brief Destruct the LinkedList
 */
template <typename Type>
ShowMeTheDataStructure::LinkedList<Type>::~LinkedList()
{
    CleanUp();
    delete head;
    delete tail;
}

/**
 * @brief Get the value located at index
 * @param index
 * @return the value located at index in linked list
 */
template <typename Type>
Type ShowMeTheDataStructure::LinkedList<Type>::Get(const int index)
{
    Node<Type> *curr = head;
    for (int i = 0; i < index; ++i)
        curr = curr->next;

    return curr->data;
}

/**
 * @brief Add val at head
 * @param val : value that we want to push at head
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::AddAtHead(const Type &val)
{

    // there is no node in linked list
    if (head == nullptr && tail == nullptr)
    {
        Node<Type> *newNode = new Node<Type>;
        newNode->data = val;

        head = newNode;
        tail = newNode;
    }

    // there is at least one node in linked list
    else
    {
        Node<Type> *newNode = new Node<Type>;
        newNode->data = val;

        head->prev = newNode;
        newNode->next = head;
        newNode->prev = tail;
        tail->next = newNode;
        head = newNode;
    }

    size++;
}

/**
 * @brief Add val at tail
 * @param val : value that we want to push at tail
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::AddAtTail(const Type &val)
{
    if (head == nullptr && tail == nullptr)
    {
        Node<Type> *newNode = new Node<Type>;
        newNode->data = val;

        head = newNode;
        tail = newNode;
    }

    else
    {
        Node<Type> *newNode = new Node<Type>;
        newNode->data = val;

        newNode->prev = tail;
        tail->next = newNode;
        newNode->next = head;
        head->prev = newNode;

        tail = newNode;
    }

    size++;
}

/**
 * @brief Add val at index
 * @param index : the index that we want to add val
 * @param val  : the value that we want to add
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::AddAtIndex(const int index,
                                                          const Type &val)
{

    if (index == 0)
        AddAtHead(val);
    else if (index == size)
        AddAtTail(val);
    else
    {

        Node<Type> *newNode = new Node<Type>;
        newNode->data = val;

        Node<Type> *temp = head;
        for (int i = 0; i < index; ++i)
            temp = temp->next;

        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        newNode->next = temp;
        temp->prev = newNode;

        size++;
    }
}

/**
 * @brief Delete an element located at index
 * @param index : the index that we want to delete
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::DeleteAtIndex(const int index)
{

    Node<Type> *node = head;
    for (int i = 0; i < index; ++i)
        node = node->next;

    if (index == 0)
    {
        if (size == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            node->prev->next = node->next;
            node->next->prev = node->prev;

            Node<Type> *temp = head;
            head = head->next;

            temp = nullptr;
        }
    }
    else if (index == size - 1)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;

        Node<Type> *temp = tail;
        tail = tail->prev;

        temp = nullptr;
    }
    else
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;

        node = nullptr;
    }

    size--;
}

/**
 * @brief Delete val in linked list (if val exists, the first val is deleted)
 * @param val : the value we want to delete
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::DeleteValue(const Type &val)
{
    Node<Type> *temp = head;

    int index;
    for (index = 0; index < size; ++index)
    {
        if (temp->data == val)
        {
            DeleteAtIndex(index);
            break;
        }

        temp = temp->next;
    }
}

/**
 * @brief Move the first element of val to head
 * @param val : the value that we want to move to head
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::MoveToHead(const Type &val)
{
    const int currSize = Size();
    DeleteValue(val);

    if (currSize != size)
    {
        AddAtHead(val);
    }
}

/**
 * @brief Rotate the linked list right by steps times
 * @param steps : the number we want to rotate
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::Rotate(const int steps)
{
    Node<Type> *newHead = head;
    Node<Type> *newTail = tail;

    for (int i = 0; i < steps; ++i)
    {
        newHead = newHead->prev;
        newTail = newTail->prev;
    }

    head = newHead;
    tail = newTail;
}

/**
 * @brief Reduce value that repeats multiple times
 * @param repeats : the number we want to reduce value
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::Reduce(const int repeats)
{
    for (int i = 0; i < repeats; ++i)
        DeleteAtIndex(size - 1);
}

/**
 * @brief Reverse at every k number of nodes at a time
 * @param k
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::K_Reverse(const int k)
{
    for (int i = 0; i < size - k; i += k)
        Swap(i, i + k - 1);
}

/**
 * @brief Sort even and odd numbers separately
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::EvenOddSeparateSort()
{
    int *evenLists = new int[size];
    int *oddLists = new int[size];
    int i = 0, j = 0, count = 0;

    Node<Type> *node = head;

    while (count < size)
    {
        if (node->data % 2 == 0)
            evenLists[i++] = node->data;
        else
            oddLists[j++] = node->data;

        node = node->next;
        count++;
    }

    std::sort(evenLists, evenLists + i);
    std::sort(oddLists, oddLists + j);

    node = head;
    count = 0;

    int k = 0, l = 0;
    while (k < i)
    {
        node->data = evenLists[k++];
        node = node->next;
    }

    while (l < j)
    {
        node->data = oddLists[l++];
        node = node->next;
    }
}

/**
 * @brief Return the number of element in the linked list
 * @return the size of linked list (the number of nodes in the linked list)
 */
template <typename Type>
int ShowMeTheDataStructure::LinkedList<Type>::Size()
{
    return size;
}

/**
 * @brief Delete all elements from the linked list
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::CleanUp()
{
    Reduce(size);
}

/**
 * @brief print the nodes in the linked list
 * @return Outputs node data one by one to the command line
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::Print()
{
    Node<Type> *node = head;
    for (int i = 0; i < size; ++i)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

/**
 * @brief Check if linked list is empty
 * @return true if empty, false otherwise
 */
template <typename Type>
bool ShowMeTheDataStructure::LinkedList<Type>::Empty()
{
    if (size == 0)
        return true;
    else
        return false;
}

/**
 * @brief Swap the two nodes' value
 * @param index1 : the node1's index
 * @param index2  : the node2's index
 */
template <typename Type>
void ShowMeTheDataStructure::LinkedList<Type>::Swap(const int index1,
                                                    const int index2)
{
    Node<Type> *node1 = head;
    Node<Type> *node2 = head;

    for (int i = 0; i < index1; ++i)
        node1 = node1->next;

    for (int j = 0; j < index2; ++j)
        node2 = node2->next;

    const int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}
