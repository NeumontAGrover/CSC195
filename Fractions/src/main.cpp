#include <Fractions.h>
#include "fraction.h"
using namespace mathlib;

int main(int argc, char *argv[]) {
  Fraction<int> fraction1 = Fraction<int>(5, 25);
  Fraction<int> fraction2 = Fraction<int>(1, 3);

  // Add the fractions after simplifying
  std::cout << "Simplify: " << fraction1 << " -> " << simplify(fraction1) << std::endl;
  fraction1 = simplify(fraction1);
  std::cout << "Adding fractions: " << fraction1 + fraction2 << std::endl;
  
  // Substract the fractions
  std::cout << "Subtracting fractions: " << fraction1 - fraction2 << std::endl;
  
  // Multiplying fractions
  std::cout << "Multiplying fractions: " << fraction1 * fraction2 << std::endl;
  
  // Dividing fractions
  std::cout << "Dividing fractions: " << fraction1 / fraction2 << std::endl;

  // Comparison operators
  std::cout << "Equals: " << (fraction1 == Fraction<int>(1, 5)) << std::endl;
  std::cout << "Greater or Equals: " << (fraction1 >= Fraction<int>(1, 10)) << std::endl;
  std::cout << "Less or Equals: " << (fraction1 <= Fraction<int>(1, 3)) << std::endl;
  std::cout << "Greater: " << (fraction1 > Fraction<int>(1, 5)) << std::endl;
  std::cout << "Less: " << (fraction1 < Fraction<int>(1, 5)) << std::endl;

  Fraction<int> fractionIn(2, 5);
  std::cout << "Input Numerator and Denominator: ";
  std::cin >> fractionIn;
  std::cout << "Inputted fraction: " << fractionIn << std::endl;

  return 0;
}
