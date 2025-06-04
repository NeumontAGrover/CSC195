#include "willow.h"

void Willow::Read(std::ostream& ostream, std::istream& istream) {
  Tree::Read(ostream, istream);
  ostream << "Enter the length of the willow branches: ";
  istream >> branchLength;
}

void Willow::Read(std::ifstream& istream) {
  Tree::Read(istream);
  istream >> branchLength;
  istream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Willow::Write(std::ostream& ostream) {
  Tree::Write(ostream);
  ostream << "\tBranch Length: " << branchLength << std::endl;
}

void Willow::Write(std::ofstream& ostream) {
  Tree::Write(ostream);
  ostream << branchLength << std::endl;
}
