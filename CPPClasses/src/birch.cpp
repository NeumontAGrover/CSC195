#include "birch.h"

void Birch::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Amount of spots on the birch tree: ";
  istream >> amountOfSpots;
}

void Birch::Read(std::ifstream& istream) {
  Tree::Read(istream);
  istream >> amountOfSpots;
  istream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Birch::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tAmount of Spots: " << amountOfSpots << std::endl;
}

void Birch::Write(std::ofstream& ostream) {
  Tree::Write(ostream);
  ostream << amountOfSpots << std::endl;
}
