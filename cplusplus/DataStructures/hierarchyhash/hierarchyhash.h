#ifndef HIERARCHYHASH_H_
#define HIERARCHYHASH_H_

#include "../flathash/flathash.h"

namespace ShowMeTheDataStructure {
class HierarchyHash {
  private:
    unsigned int **hashtable;

    // Variable for overfow handling
    enum overflow_handle flag;

    // Loading factor
    float alpha;

    // Size(range) of full hash table, Initially 1000
    unsigned int tableSize;

    // Size of sub hash table. Fixed by 100
    unsigned int subTableSize;

    // Nums of Keys
    unsigned int numOfKeys;

  public:
    HierarchyHash(enum overflow_handle _flag, float _alpha);
    ~HierarchyHash();
    unsigned int hashFunction(const unsigned int key);
    unsigned int getTableSize();
    unsigned int getNumOfKeys();
    unsigned int getAllocatedSize();
    int insert(const unsigned int key);
    int remove(const unsigned int key);
    int search(const unsigned int key);
    void clearTombstones();
    void print();
};
} // namespace ShowMeTheDataStructure

#endif