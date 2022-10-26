#include <stdlib.h>
#include <lab.h>
#include <gtest/gtest.h>


TEST(AddTest, Positive){
     //This test is named "Positive", and belongs to the "AddTest" test case
     EXPECT_EQ(add(1,2),3);
}

