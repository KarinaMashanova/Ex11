// Copyright 2021 KarMashanova
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
#include<iostream>
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
#endif  // INCLUDE_TRAIN_H_
