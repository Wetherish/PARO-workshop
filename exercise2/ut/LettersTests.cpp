#include "Letters_lib.hpp"
#include "gtest/gtest.h"
TEST(LettersSuite, dummyTest)
{
    ASSERT_TRUE(true);
}

TEST(LettersSuite, aaaValue)
{
    ASSERT_EQ(Letters("aaa"), 3);
}
TEST(LettersSuite, qzValue)
{
    ASSERT_EQ(Letters("qz"), 20);
}