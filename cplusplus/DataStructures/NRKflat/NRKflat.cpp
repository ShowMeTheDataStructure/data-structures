#include "NRKflat.h"

ShowMeTheDataStructure::NRKflat::NRKflat(enum overflow_handle _flag, float _alpha, unsigned int _filterSize) : FlatHash(_flag, _alpha)
{
    filterSize = _filterSize;
}

ShowMeTheDataStructure::NRKflat::~NRKflat()
{
}

unsigned int ShowMeTheDataStructure::NRKflat::hashFunction(const unsigned int key)
{
    return key % filterSize;
}

unsigned int ShowMeTheDataStructure::NRKflat::murmurHash2(const void *key)
{
    int len = 4;
    unsigned int seed = 2019;

    const unsigned int m = 0x5bd1e995;
    const int r = 24;

    unsigned int h = seed ^ len;

    const unsigned char *data = (const unsigned char *)key;

    while (len >= 4)
    {
        unsigned int k = *(unsigned int *)data;

        k *= m;
        k ^= k >> r;
        k *= m;

        h *= m;
        h ^= k;

        data += 4;
        len -= 4;
    }

    switch (len)
    {
    case 3:
        h ^= data[2] << 16;
    case 2:
        h ^= data[1] << 8;
    case 1:
        h ^= data[0];
        h *= m;
    }

    h ^= h >> 13;
    h *= m;
    h ^= h >> 15;

    return h;
}
void ShowMeTheDataStructure::NRKflat::getMMHashValue(const unsigned int key, unsigned int &h1, unsigned int &h2, unsigned int &h3)
{
    unsigned int h1, h2, h3;
    getMMHashValue(key, h1, h2, h3);
}
bool ShowMeTheDataStructure::NRKflat::filter(const unsigned int key) {}
int ShowMeTheDataStructure::NRKflat::insert(const unsigned int key) {}
int ShowMeTheDataStructure::NRKflat::remove(const unsigned int key) {}
int ShowMeTheDataStructure::NRKflat::search(const unsigned int key) {}