#ifndef FLATHASH_H_
#define FLATHASH_H_

#include <iostream>

// Flag(hint) for overflow handling
enum overflow_handle
{
    LINEAR_PROBING = 0,
    QUADRATIC_PROBING
};

namespace ShowMeTheDataStructure
{
    class FlatHash
    {
    private:
        // hash table
        unsigned int *hashtable;

        // Variable for overflow handling
        enum overflow_handle flag;

        // Loading factor
        float alpha;

        // Size of hash table
        unsigned int tableSize;

        // Nums of keys
        unsigned int numOfKeys;

    public:
        FlatHash(enum overflow_handle _flag, float _alpha);

        ~FlatHash();

        unsigned int hashFunction(const unsigned int key);

        unsigned int getTableSize();

        unsigned int getNumOfKeys();

        int insert(const unsigned int key);

        int remove(const unsigned int key);

        int search(const unsigned int key);

        void clearTombstones();

        void print();
    };
}

#endif