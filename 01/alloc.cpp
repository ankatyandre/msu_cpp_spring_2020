#include <new>
#include <iostream>
#include "alloc.h"

size_t data_size = 0;
size_t offset = 0;

char *m = nullptr;

void makeAllocator(size_t maxSize)
{
    if (!m || maxSize != data_size) {
        delete[] m;
        m =new(std::nothrow)char[maxSize];
        if( m == nullptr) {
            std::cerr << "bad alloc" << ba.what() << '\n';
        }
    }
    data_size = maxSize;
    offset = 0;
}

char *alloc(size_t size)
{
    if (m == nullptr || (offset + size > data_size))
        return nullptr;
    offset += size;
    return static_cast<char *>(m + offset - size);
}

void reset()
{
    offset = 0;
}