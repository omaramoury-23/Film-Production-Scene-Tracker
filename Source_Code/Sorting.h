#ifndef SORTING_H
#define SORTING_H

#include "Scene.h"
#include <cstddef>

class Sorting {
public:
    // Sort scene pointers by duration (ascending)
    static void bubbleSortByDuration(
        Scene* scenes[],
        std::size_t count
    );
};

#endif
