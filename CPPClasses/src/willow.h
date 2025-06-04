#pragma once
#include "tree.h"

class Willow : public Tree {
public:
  void Read(std::ostream& ostream, std::istream& istream) override;
  void Read(std::ifstream& istream) override;
  void Write(std::ostream& ostream) override;
  void Write(std::ofstream& ostream) override;
  eType GetType() override { return eType::WILLOW; };

private:
  float branchLength;
};
