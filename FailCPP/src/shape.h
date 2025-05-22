#pragma once

class Shape {
public:
  virtual ~Shape() = default;

  virtual float Area() = 0;
};
