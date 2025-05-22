#pragma once
#include "tree.h"

class Willow : public Tree {
public:
  void Read(std::ostream& ostream, std::istream& istream) override;
  void Write(std::ostream& ostream) override;
  eType GetType() override { return eType::WILLOW; };

private:
  float branchLength;
};
