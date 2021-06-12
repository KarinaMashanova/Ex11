// Copyright 2021 KarMashanova
#include <gtest/gtest.h>

#include <string>

#include "train.h"

TEST(TrainTest, test1) {
  Train train;
  for (int i = 0; i < 9; i++) {
    train.addCage();
  }
  EXPECT_EQ(9, train.getlen());
}

TEST(TrainTest, test2) {
  Train train;
  for (int i = 0; i < 1206; i++) {
    train.addCage();
  }
  EXPECT_EQ(1206, train.getlen());
}

TEST(TrainTest, test3) {
  Train train;
  for (int i = 0; i < 10300; i++) {
    train.addCage();
  }
  EXPECT_EQ(10300, train.getlen());
}



