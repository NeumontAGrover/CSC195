#pragma once
#include "food.h"

class Sandwich : public Food {
public:
  void BeConsumed() override;
};
