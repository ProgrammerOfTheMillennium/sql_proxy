#include "gtest/gtest.h"

TEST(test1, test_eq1) {
    EXPECT_EQ(1, 1);
}

TEST(test1, test_eq2) {
    EXPECT_NE(5, 3);
}
