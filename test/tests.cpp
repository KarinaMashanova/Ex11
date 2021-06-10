// Copyright 2021 KarMashanova
#include <gtest/gtest.h>

#include <string>

#include "train.h"

TEST(TrainTest, test1) {
  Train train(9);
  EXPECT_EQ(9, train.getlen());
}

TEST(TrainTest, test2) {
  Train train(1200);
  EXPECT_EQ(1206, train.getlen());
}

TEST(TrainTest, test3) {
  Train train(102);
  EXPECT_EQ(10322, train.getlen());
}



