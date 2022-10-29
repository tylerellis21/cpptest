# CPPTEST

A very simple C++ test system.

There's a test unit which consists of multiple cases.

Register your test cases via the TEST macro.
EG:
`
TEST(Foo, Bar) {
    TEST_ASSERT(10 == 10);
    return true;
}
`

All test cases must return a true/false value.

Use the following to assert that a statement must be true
otherwise the test case failes and is logged to the console as such

EG:
`
TEST_ASSERT(expression)
`

EG:
`
TEST_ASSERT(10 == 10);
`

Use the following function call to invoke all of the test cases.
    `cpptest::runAllTests();`