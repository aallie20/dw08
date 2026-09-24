#include <gtest/gtest.h>
#include "dw.h"

TEST(FindMaximum, HandlesUnsortedValues) {
    int values[] = {3, 7, 2, 9, 4};
    EXPECT_EQ(find_maximum(values, 5), 9);
}

TEST(FindMaximum, HandlesSingleElement) {
    int values[] = {42};
    EXPECT_EQ(find_maximum(values, 1), 42);
}

TEST(FindMaximum, HandlesAllNegativeValues) {
    int values[] = {-5, -1, -9, -3};
    EXPECT_EQ(find_maximum(values, 4), -1);
}
