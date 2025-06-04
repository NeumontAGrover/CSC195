#include "tree.h"

void Tree::Read(std::ostream& ostream, std::istream& istream) {
  ostream << "Name of the tree: ";
  istream >> name;
  
  ostream << "Height of the tree: ";
  istream >> height;
}

void Tree::Read(std::ifstream& istream) {
  std::getline(istream, name);
  istream >> height;
  istream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Tree::Write(std::ostream& ostream) {
  ostream << "Name: " << name << "\n\tHeight: " << height << std::endl;
}

void Tree::Write(std::ofstream& ostream) {
  ostream << static_cast<int>(GetType()) << std::endl;
  ostream << name << std::endl;
  ostream << height << std::endl;
}

std::istream& operator >> (std::istream& istream, Tree& tree) {
  tree.Read(std::cout, istream);
  return istream;
}

std::ifstream& operator >> (std::ifstream& istream, Tree& tree) {
  tree.Read(istream);
  return istream;
}

std::ostream& operator << (std::ostream& ostream, Tree& tree) {
  tree.Write(ostream);
  return ostream;
}

std::ofstream& operator << (std::ofstream& ostream, Tree& tree) {
  tree.Write(ostream);
  return ostream;
}
