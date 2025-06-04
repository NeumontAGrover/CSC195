#include "oak.h"

void Oak::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Enter the age of the oak: ";
  istream >> age;
}

void Oak::Read(std::ifstream& istream) {
  Tree::Read(istream);
  istream >> age;
  istream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Oak::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tAge: " << age << std::endl;
}

void Oak::Write(std::ofstream& ostream) {
  Tree::Write(ostream);
  ostream << age << std::endl;
}
