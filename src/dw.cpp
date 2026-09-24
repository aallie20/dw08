// src/dw.cpp
#include "dw.h"

int find_maximum(const int values[], int size) {
    int largest = values[0];
    for (int i = 1; i < size; i++) {
        if (values[i] > largest) {
            largest = values[i];

    }
    }
    return largest;
}
