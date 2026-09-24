#include <iostream>
#include "dw.h"

int main() {
    int values[]{5, 1, 10, 25, 14};

    int largest{find_maximum(values, 5)};

    std::cout << "The largest is: " << largest << std::endl;

    return 0;
}
