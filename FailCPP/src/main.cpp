#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

int main() {
  std::vector<Shape*> shapes;

  Circle* c = new Circle(1.0f);
  c->SetRadius(3.0f);
  Rectangle* r = new Rectangle(4.0f, 5.0f);

  shapes.push_back(c);
  shapes.push_back(r);

  for (size_t i = 0; i < shapes.size(); i++) {
    std::cout << "Area: " << shapes[i]->Area() << std::endl;
  }

  for (Shape* shape : shapes) {
    delete shape;
  }

  return 0;
}
