#include "willow.h"

void Willow::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Enter the length of the willow branches: ";
  istream >> branchLength;
}

void Willow::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tBranch Length: " << branchLength << std::endl;
}
