#ifndef TST_TESTLIB_H
#define TST_TESTLIB_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include"../Funclib/funclib.h"
using namespace testing;

TEST(Test, Funclib)
{
    Funclib funclib;
    int res=funclib.add(3,3);
    EXPECT_EQ(res, 6);
//    ASSERT_THAT(0, Eq(0));
}

#endif // TST_TESTLIB_H
