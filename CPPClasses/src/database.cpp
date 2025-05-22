#include "database.h"

void Database::Create(Tree::eType type) {
  Tree *tree = nullptr;
  switch (type) {
    case Tree::eType::OAK:
      tree = new Oak;
      break;
    case Tree::eType::WILLOW:
      tree = new Willow;
      break;
    case Tree::eType::BIRCH:
      tree = new Birch;
      break;
  }

  tree->Read(std::cout, std::cin);
  trees.push_back(tree);
}

void Database::Display(const string& name) {
  for (Tree *obj : trees) { 
    if (obj->GetName() == name)
      obj->Write(std::cout); 
  }
}

void Database::Display(Tree::eType type) {
  for (Tree *obj : trees) { 
    if (obj->GetType() == type)
      obj->Write(std::cout); 
  }
}

void Database::DisplayAll() {
  for (Tree *obj : trees)
    obj->Write(std::cout);
}
