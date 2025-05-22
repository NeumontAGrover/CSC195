#pragma once
#include "food.h"

class Fruit : public Food {
public:
  Fruit(int calories, int numOfSeeds) : Food(calories) {
    numberOfSeeds = numOfSeeds;
  }

  void BeConsumed() override;
protected:
  int numberOfSeeds;
};
