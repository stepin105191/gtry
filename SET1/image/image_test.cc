
#include "Image.h"
#include <gtest/gtest.h>

TEST(Image, Dconstruct) {
    Image I1;
    EXPECT_EQ(0,I1.getm_x());
    EXPECT_EQ(0,I1.getm_y());
    EXPECT_EQ(0,I1.getm_height());
    EXPECT_EQ(0,I1.getm_width());

}
TEST(Image, Parameterconstruct) {
    Image I1(30,30,30,30);
    I1.resizee(30,30);
    EXPECT_EQ(34,I1.getm_width());
    EXPECT_EQ(34,I1.getm_height());
    I1.movee(30,30);
    EXPECT_EQ(38,I1.getm_x());
    EXPECT_EQ(38,I1.getm_y());
}

