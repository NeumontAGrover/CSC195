#include "database.h"

void Database::Add(Tree::eType type) {
  Tree* tree = Create(type);
  std::cin >> *tree;
  trees.push_back(std::unique_ptr<Tree>(tree));
}

Tree* Database::Create(Tree::eType type) {
  Tree* tree = nullptr;
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

  return tree;
}

void Database::Save(const string& filename) {
  std::ofstream output(filename);
  if (output.is_open()) {
    for (auto& tree : trees)
      output << *tree;
  }

  output.close();
}

void Database::Load(const string& filename) {
  std::ifstream input(filename);
  if (input.is_open()) {
    trees = std::vector<unique_ptr<Tree>>();
    int type;
    while (input >> type) {
      input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      Tree* tree = Create(static_cast<Tree::eType>(type));
      input >> *tree;
      
      trees.push_back(std::unique_ptr<Tree>(tree));
    }
  }

  input.close();
}

void Database::Display(const string& name) {
  for (auto& obj : trees) {
    if (obj->GetName() == name)
      std::cout << *obj;
  }
}

void Database::Display(Tree::eType type) {
  for (auto& obj : trees) { 
    if (obj->GetType() == type)
      std::cout << *obj;
  }
}

void Database::DisplayAll() {
  for (auto& obj : trees)
    std::cout << *obj;
}
