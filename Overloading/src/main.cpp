#include <Overloading.h>
#include <iostream>
#include "vector2.h"
using namespace Vectors;

void print(int x) { std::cout << x << std::endl; };
void print(float x) { std::cout << x << std::endl; };
void print(bool x) { std::cout << x << std::endl; };

int main(int argc, char *argv[]) {
    // print(10);
    // print(3.14f);
    // print(false);

    Vector2 position = Vector2(4.577, 2.516);
    Vector2 velocity = Vector2(3.6749, -1.187);
    Vector2 drag = Vector2(0.05, -0.002);
    Vector2 change = position + velocity - drag;

    std::cout << "Change in position: ";
    std::cout << change;
    return 0;
}
