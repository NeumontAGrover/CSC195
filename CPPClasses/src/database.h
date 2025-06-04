#pragma once
#include "tree.h"
#include "oak.h"
#include "willow.h"
#include "birch.h"
#include <fstream>
#include <memory>
using std::string;
using std::unique_ptr;

class Database {
public:
  void Add(Tree::eType type);

  void Save(const string& filename);
  void Load(const string& filename);

  void DisplayAll();
  void Display(const string& name);
  void Display(Tree::eType type);

private:
  std::vector<unique_ptr<Tree>> trees;

  Tree* Create(Tree::eType type);
};
