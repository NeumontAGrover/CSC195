#pragma once
#include "tree.h"
#include "oak.h"
#include "willow.h"
#include "birch.h"

class Database {
public:
  ~Database() {
    for (Tree *tree : trees)
      delete tree;
  }

  void Create(Tree::eType type);
  void DisplayAll();
  void Display(const string& name);
  void Display(Tree::eType type);

private:
  std::vector<Tree*> trees;
};
