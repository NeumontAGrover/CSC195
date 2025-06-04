#pragma once
#include "tree.h"

class Oak : public Tree {
public:
  void Read(std::ostream& ostream, std::istream& istream) override;
  void Read(std::ifstream& istream) override;
  void Write(std::ostream& ostream) override;
  void Write(std::ofstream& ostream) override;
  eType GetType() override { return eType::OAK; };

private:
  int age;
};
