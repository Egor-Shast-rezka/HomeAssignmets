/*
    Egor Shastin st129457@student.spbu.ru
    This is code for testing all classes by using Google Test
*/

#include <gtest/gtest.h>
#include "title.h"

// First 2 test for Partial Specialization template (int and double)
TEST(TestPartialSpecialization, ForInt)
{
    Sample<int> test(10, 10, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestPartialSpecialization, ForDouble)
{
    Sample<double> test(10.9f, 10, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

// Test method bar in Class1
TEST(TestFirstClass, ForTrue)
{
    Sample<Class1> test(Class1(10), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestFirstClass, ForFalse)
{
    Sample<Class1> test(Class1(-10), -20, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

// Test method bar in Class2
TEST(TestSecondClass, ForTrue)
{
    Sample<Class2> test(Class2(10), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestSecondClass, ForFalse)
{
    Sample<Class2> test(Class2(10), 20, {});

    EXPECT_FALSE(test.foo());
}

// Test method bar in Class3
TEST(TestThirdClass, ForTrue)
{
    Sample<Class3> test(Class3(10), -3, {1.1f, 2.4f, 3.6f});

    EXPECT_TRUE(test.foo());
}

TEST(TestThirdClass, ForFalse)
{
    Sample<Class3> test(Class3(14), 20, {1.1f, 2.4f, 3.6f});

    EXPECT_FALSE(test.foo());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
