#include "vector2.h"
using namespace Vectors;

void Vectors::operator << (std::ostream &ostream, Vector2 v) {
  ostream << '(' << v.x << ", " << v.y << ')' << std::endl;
}

Vector2 Vector2::operator + (Vector2 v) {
  return Vector2(x + v.x, y + v.y);
}

Vector2 Vector2::operator - (Vector2 v) {
  return Vector2(x - v.x, y - v.y);
}
