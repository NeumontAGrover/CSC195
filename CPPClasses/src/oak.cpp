#include "oak.h"

void Oak::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Enter the age of the oak: ";
  istream >> age;
}

void Oak::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tAge: " << age << std::endl;
}
