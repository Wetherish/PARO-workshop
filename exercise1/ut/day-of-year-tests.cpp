#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_TRUE(true);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}
TEST(DayOfYearTestSuite, February1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(2, 1, 2020), 32);
}

TEST(DayOfYearTestSuite, today)
{
  ASSERT_EQ(dayOfYear(5, 31, 2023), 151);
}

TEST(DayOfYearTestSuite, TodayNextYear)
{
  ASSERT_EQ(dayOfYear(5, 31, 2024), 152);
}


