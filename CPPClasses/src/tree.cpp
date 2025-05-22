#include "tree.h"

void Tree::Read(std::ostream& ostream, std::istream& istream) {
  ostream << "Name of the tree: ";
  istream >> name;
  
  ostream << "Height of the tree: ";
  istream >> height;
}

void Tree::Write(std::ostream& ostream) {
  ostream << "Name: " << name << "\n\tHeight: " << height << std::endl;
}
