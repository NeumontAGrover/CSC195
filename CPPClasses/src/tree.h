#pragma once
#include <iostream>
#include <string>
using std::string;


class Tree {
public:
  enum eType {
    OAK,
    WILLOW,
    BIRCH
  };

  virtual ~Tree() = default;

  virtual void Read(std::ostream& ostream, std::istream& istream);
  virtual void Write(std::ostream& ostream);
  virtual eType GetType() = 0;
  string GetName() { return name; };
  float GetHeight() { return height; };

private:
  string name;
  float height;
};
