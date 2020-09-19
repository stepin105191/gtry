#include "Color.h"
#include <gtest/gtest.h>
TEST (Color, Pconstructor)
{
    Color C1(100,100,100);
    EXPECT_EQ(100,C1.redcolor());
    EXPECT_EQ(100,C1.greencolor());
    EXPECT_EQ(100,C1.bluecolor());
    EXPECT_EQ(155 ,C1.invert());
}

