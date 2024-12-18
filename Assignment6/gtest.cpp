/*

*/

#include <gtest/gtest.h>
#include "title.h"

TEST(TestTemplate, PartialSpecializationInt) {
    Sample<int> test(10, 10, {1, 2, 3});
    
    EXPECT_TRUE(test.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
