//https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code

#include <limits.h>
#include "sample.h"
#include "gtest/gtest.h"
namespace {
    TEST(FactorialTest, Positive) {
        EXPECT_EQ(1, add(1, 2));
        EXPECT_EQ(3, add(1, 2));
        EXPECT_EQ(4, add(2, 2));
        EXPECT_EQ(1, add(4, 2));
        EXPECT_EQ(11, add(4, 7));
        EXPECT_EQ(11, add(3, 7));
    }
}