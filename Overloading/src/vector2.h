#pragma once
#include <iostream>

namespace Vectors {
  class Vector2 {
  private:
    double x, y;

  public:
    Vector2() : x(0), y(0) {}
    Vector2(double x, double y) : x(x), y(y) {}

    Vector2 operator + (Vector2 v);
    Vector2 operator - (Vector2 v);

    friend void operator << (std::ostream& ostream, Vector2 v);
  };
};
