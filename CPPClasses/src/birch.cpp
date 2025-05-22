#include "birch.h"

void Birch::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Amount of spots on the birch tree: ";
  istream >> amountOfSpots;
}

void Birch::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tAmount of Spots: " << amountOfSpots << std::endl;
}
