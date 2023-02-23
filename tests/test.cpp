
#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(Constructor, testNormal){

Rectangle* testRec = new Rectangle(4,4);


EXPECT_EQ(testRec->area(),16);


}

TEST (Constructor, testZero){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->area(), 0);

}



TEST(Perimeter , testDiff){

Rectangle* testRec = new Rectangle(2,3);


EXPECT_EQ(testRec->perimeter(), 10);

    
}

TEST(Perimeter, testZero){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->perimeter(), 0);

}

TEST(Perimeter, testSame){

Rectangle* testRec = new Rectangle(4, 4);

EXPECT_EQ(testRec->perimeter(), 16);

}

TEST(Area, testDiff){

Rectangle* testRec = new Rectangle(4,5);

EXPECT_EQ(testRec->area(),20);


}

TEST(Area, testZero){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->area(), 0);

}

TEST(Area, testSame){

Rectangle* testRec = new Rectangle(4,4);

EXPECT_EQ(testRec->area(), 16);

}
