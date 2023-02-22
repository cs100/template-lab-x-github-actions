
#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(rectangleTEST, testConstructor){

Rectangle* testRec = new Rectangle(4,4);


EXPECT_EQ(testRec->area(),16);


}

TEST(rectangleTEST , testPerimeter){

Rectangle* testRec = new Rectangle(2,3);


EXPECT_EQ(testRec->perimeter(), 10);

    
}
TEST(rectangleTEST, testArea){

Rectangle* testRec = new Rectangle(4,4);

EXPECT_EQ(testRec->area(),16);


}


