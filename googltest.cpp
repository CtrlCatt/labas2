#include <gtest/gtest.h>
#include <iostream>
#include "Seven.h"

TEST(seven, equality) {
  Seven a(2, 10);
  Seven b(2, 10);
  bool res;
  EXPECT_TRUE(res = a == b);
}
TEST(seven, summ) {
  Seven a(3, 100);
  Seven b(3, 100);
  Seven c(3,200);
  Seven res = a + b;
  EXPECT_TRUE(res == c );
}

TEST(seven, sub) {
  Seven a(2, 50);
  Seven b(2, 10);
  Seven c(2,40);
  Seven res = a - b;
  EXPECT_TRUE(res == c );
}

TEST(seven, more) {
  Seven a(2, 97);
  Seven b(2, 75);
  bool res;
  EXPECT_TRUE(res = (a > b));
  EXPECT_FALSE(res = (b > a));
}

TEST(seven, less) {
  Seven a(2, 97);
  Seven b(2, 75);
  bool res;
  EXPECT_FALSE(res = (a < b));
  EXPECT_TRUE(res = (b < a));
}



