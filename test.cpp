#include "logic.h"
#include "gtest/gtest.h"

TEST(FifoNotFull,HandleFifoNotFullCondition){
    EXPECT_EQ(logic(1,[0]), 0);
}