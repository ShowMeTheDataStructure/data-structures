#ifndef NRKFLAT_H_
#define NRKFLAT_H_

#include "../flathash/flathash.h"
#include <stdint.h>

#define INT2VOIDP(i) (void *)(uintptr_t)(i)

namespace ShowMeTheDataStructure {
class NRKflat : public FlatHash {
  private:
    // Counter array
    unsigned int *counters;

    // Size of NRK filter (the number of counters)
    unsigned int filterSize;

  public:
    NRKflat(enum overflow_handle _flag, float _alpha, unsigned int _filterSize);
    ~NRKflat();

    unsigned int hashFunction(const unsigned int key);
    unsigned int murmurHash2(const void *key);
    void getMMHashValue(const unsigned int key, unsigned int &h1,
                        unsigned int &h2, unsigned int &h3);
    bool filter(const unsigned int key);
    int insert(const unsigned int key);
    int remove(const unsigned int key);
    int search(const unsigned int key);
};
} // namespace ShowMeTheDataStructure

#endif