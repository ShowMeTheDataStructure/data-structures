#include "flathash.h"

ShowMeTheDataStructure::FlatHash::FlatHash(enum overflow_handle _flag, float _alpha)
{
    // initial table size is 1000
    tableSize = 1000;
    numOfKeys = 0;
    flag = _flag;
    alpha = _alpha;
}

ShowMeTheDataStructure::FlatHash::~FlatHash()
{
}

unsigned int ShowMeTheDataStructure::FlatHash::hashFunction(const unsigned int key)
{
    return key % tableSize;
}

unsigned int ShowMeTheDataStructure::FlatHash::getTableSize()
{
    return tableSize;
}

unsigned int ShowMeTheDataStructure::FlatHash::getNumOfKeys()
{
    return numOfKeys;
}

int ShowMeTheDataStructure::FlatHash::insert(const unsigned int key)
{
    return 0;
}

int ShowMeTheDataStructure::FlatHash::remove(const unsigned int key)
{
    return 0;
}

int ShowMeTheDataStructure::FlatHash::search(const unsigned int key)
{
    return 0;
}

void ShowMeTheDataStructure::FlatHash::clearTombstones()
{
    return;
}

void ShowMeTheDataStructure::FlatHash::print()
{
    return;
}