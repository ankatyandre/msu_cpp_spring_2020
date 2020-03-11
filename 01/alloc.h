#pragma once

#ifndef alloc_2020
#define alloc_2020

#include <cstdlib>

void makeAllocator(size_t maxSize);
char* alloc(size_t size);
void reset();

#endif
