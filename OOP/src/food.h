#pragma once
#include <iostream>
using namespace std;

class Food {
public:
  Food() {
    m_calories = 0;
  }
  
  Food(int calories) {
    SetCalories(calories);
  }

  virtual void BeConsumed() = 0;
  int GetCalories() { return m_calories; }
  void SetCalories(int calories) { m_calories = calories; }
  
protected:
  int m_calories;
};
