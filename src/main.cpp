// Copyright 2021 KarMashanova
#include <iostream>
#include <string>
#include "train.h"
using std::cout;
using std::endl;

int main() {
  Train train;
  for (int i = 0; i < 4; ++i) train.addCage();
  cout << train.getlen() << endl;
  return 0;
}
