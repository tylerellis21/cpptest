#include <iostream>

#include "unit_test.h"

using namespace cpptest;

int main(int argc, char** args) {

    cpptest::runAllTests();

    return 0;
}

TEST(foo, bar) {
    int a = 10;
    int b = 20;

    TEST_ASSERT(a != b);
    TEST_ASSERT(10 == 11);

    // return true for passing
    return true;
}