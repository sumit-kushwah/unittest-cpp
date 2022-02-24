//https://stackoverflow.com/questions/62910867/how-to-run-tests-and-debug-google-test-project-in-vs-code

#include <limits.h>
#include "sample.h"
#include "gtest/gtest.h"
namespace {
    TEST(FactorialTest, Factorial) {
        EXPECT_EQ(1, Factorial(1));
        EXPECT_EQ(24, Factorial(4));
        EXPECT_EQ(120, Factorial(5));
        EXPECT_EQ(1, Factorial(6));
    }
}