#include "logic.h"
#include "gtest/gtest.h"
#include <stdint.h>
#include <conio.h>

TEST(FifoNotFull,HandleFifoNotFullCondition){
    EXPECT_EQ(logic(1,[0]), 0);
}