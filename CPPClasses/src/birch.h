#pragma once
#include "tree.h"

class Birch : public Tree {
public:
  void Read(std::ostream& ostream, std::istream& istream) override;
  void Write(std::ostream& ostream) override;
  eType GetType() override { return eType::BIRCH; };

private:
  unsigned short amountOfSpots;
};
