
#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(rectangleTEST, testConstructor){

Rectangle* testRec = new Rectangle(4,4);


EXPECT_EQ(testRec->area(),16);


}

TEST (rectangleTEST, testConstructorTwo){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->area(), 0);

}

TEST(rectangleTEST, testConstructorThree){

Rectangle* testRec;

EXPECT_DEATH(new Rectangle(-1, -2), "Width/height cannot be less than 0");

}

TEST(rectangleTEST , testPerimeter){

Rectangle* testRec = new Rectangle(2,3);


EXPECT_EQ(testRec->perimeter(), 10);

    
}

TEST(rectangleTEST, testPerimeterTwo){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->perimeter(), 0);

}

TEST(rectangleTEST, testPerimeterThree){

Rectangle* testRec = new Rectangle(4, 4);

EXPECT_EQ(testRec->perimeter(), 16);

}

TEST(rectangleTEST, testArea){

Rectangle* testRec = new Rectangle(4,5);

EXPECT_EQ(testRec->area(),20);


}

TEST(rectangleTEST, testAreaTwo){

Rectangle* testRec = new Rectangle(0,0);

EXPECT_EQ(testRec->area(), 0);

}

TEST(rectangleTEST, testAreaThree){

Rectangle* testRec = new Rectangle(4,4);

EXPECT_EQ(testRec->area(), 16);

}
