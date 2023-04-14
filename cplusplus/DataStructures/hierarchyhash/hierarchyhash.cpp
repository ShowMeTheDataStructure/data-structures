#include "hierarchyhash.h"

ShowMeTheDataStructure::HierarchyHash::HierarchyHash(enum overflow_handle _flag, float _alpha)
{
    // initial map size is 1000
    tableSize = 1000;

    // table size is fixed to 100
    subTableSize = 100;
    flag = _flag;
    alpha = _alpha;
}
ShowMeTheDataStructure::HierarchyHash::~HierarchyHash() {}
unsigned int ShowMeTheDataStructure::HierarchyHash::hashFunction(const unsigned int key)
{
    return key % tableSize;
}
unsigned int ShowMeTheDataStructure::HierarchyHash::getTableSize()
{
    return tableSize;
}
unsigned int ShowMeTheDataStructure::HierarchyHash::getNumOfKeys()
{
    return numOfKeys;
}
unsigned int ShowMeTheDataStructure::HierarchyHash::getAllocatedSize() {}
int ShowMeTheDataStructure::HierarchyHash::insert(const unsigned int key) {}
int ShowMeTheDataStructure::HierarchyHash::remove(const unsigned int key) {}
int ShowMeTheDataStructure::HierarchyHash::search(const unsigned int key) {}
void ShowMeTheDataStructure::HierarchyHash::clearTombstones() {}
void ShowMeTheDataStructure::HierarchyHash::print() {}

// ShowMeTheDataStructure::HierarchyHash::~HierarchyHash();
// unsigned int ShowMeTheDataStructure::HierarchyHash::hashFunction(const unsigned int key);
// unsigned int ShowMeTheDataStructure::HierarchyHash::getTableSize();
// unsigned int ShowMeTheDataStructure::HierarchyHash::getNumOfKeys();
// unsigned int ShowMeTheDataStructure::HierarchyHash::getAllocatedSize();
// int ShowMeTheDataStructure::HierarchyHash::insert(const unsigned int key);
// int ShowMeTheDataStructure::HierarchyHash::remove(const unsigned int key);
// int ShowMeTheDataStructure::HierarchyHash::search(const unsigned int key);
// void ShowMeTheDataStructure::HierarchyHash::clearTombstones();
// void ShowMeTheDataStructure::HierarchyHash::print();