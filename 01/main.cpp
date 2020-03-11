#include <cstdlib>
#include <iostream>
#include "alloc.h"

int main()
{
    char *a;
    makeAllocator(INT64_MAX);
    a=alloc(1);
    assert(!a);

    // Allocate  memory
    makeAllocator(100);
    a = alloc(100);
    std::cout << a;
    assert(a);
    reset();
    a = alloc(100);
    assert(a);
    //  overflow
    p=alloc(1);
    assert(!a);

    // new allocate
    makeAllocator(1000);
    a = alloc(900);
    assert(a);

    a = alloc(90);
    assert(a);

    a = alloc(10);
    assert(a);

    a = alloc(1);
    assert(!a);
    std::cout << "It's ok" << std::endl;
}