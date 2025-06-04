#pragma once
#include <iostream>
#include <fstream>
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
  virtual void Read(std::ifstream& istream);
  virtual void Write(std::ostream& ostream);
  virtual void Write(std::ofstream& ostream);
  virtual eType GetType() = 0;
  string GetName() { return name; };
  float GetHeight() { return height; };

  friend std::istream& operator >> (std::istream& istream, Tree& tree);
  friend std::ifstream& operator >> (std::ifstream& istream, Tree& tree);
  
  friend std::ostream& operator << (std::ostream& ostream, Tree& tree);
  friend std::ofstream& operator << (std::ofstream& ostream, Tree& tree);

private:
  string name;
  float height;
};
