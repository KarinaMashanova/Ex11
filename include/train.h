// Copyright 2021 KarMashanova
#define TRAIN_H
#ifdef TRAIN_H
#include <iostream>
class Cage {
  bool light;
 public:
  Cage* next;
  Cage* prev;
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
};
class Train {
  Cage* first;
  Cage* last;

 public:
  Train();
  void addCage();
  void printTrain();
  unsigned int getlen();
};
#endif  // TRAIN_H