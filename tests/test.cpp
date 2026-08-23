#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

//AREA 
TEST(areaTest, zeroWidth) {
	Rectangle r;
	r.set_width(0);
	r.set_height(5);
	EXPECT_EQ(r.area(), 0);
}

TEST(areaTest, zeroHeight) {
	Rectangle r;
	r.set_width(5);
	r.set_height(0);
	EXPECT_EQ(r.area(), 0);
}

TEST(areaTest, zeroArea) {
	Rectangle r;
	r.set_width(5);
	r.set_height(0);
	EXPECT_EQ(r.area(), 0);
}

TEST(areaTest, positiveArea) {
	Rectangle r;
	r.set_width(5);
	r.set_height(2);
	EXPECT_EQ(r.area(), 10);

}

TEST(areaTest, negativeArea) {
	Rectangle r;
	r.set_width(5);
	r.set_height(-2);
	EXPECT_EQ(r.area(), -10);
	 

}

//PERIMETER

TEST(perimeterTest, positivePerimeter) {
	Rectangle r;
	r.set_width(5);
	r.set_height(2);
	EXPECT_EQ(r.perimeter(), 14);

}

TEST(perimeterTest, negativePerimeter) {
	Rectangle r;
	r.set_width(-5);
	r.set_height(-2);
	EXPECT_EQ(r.perimeter(), -14);
}

TEST(perimeterTest, zeroPerimeter) {
	Rectangle r;
	r.set_width(0);
	r.set_height(0);
	EXPECT_EQ(r.perimeter(), 0);

}

//CONSTRUCTOR

TEST(constructorTest, defaultConstructor) {
	Rectangle r;
	EXPECT_EQ(r.get_width(), 0);
	EXPECT_EQ(r.get_height(), 0);
}

TEST(constructorTest, positiveParameters) { 
	Rectangle r(5,2);
	EXPECT_EQ(r.get_width(), 5);
	EXPECT_EQ(r.get_height(), 2);

}

TEST(constructorTest, negativeParameters) {
	Rectangle r(-5, -2);
	EXPECT_EQ(r.get_width(), -5);
	EXPECT_EQ(r.get_height(), -2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
