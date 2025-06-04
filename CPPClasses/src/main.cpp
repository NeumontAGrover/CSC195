#include <CPPClasses.h>
#include "database.h"

int main(int argc, char *argv[]) {
  Database database;
  // int* num = new int(5);

  bool quit = false;
  while (!quit) {
    std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Load\n6 - Save\n7 - Quit\n";
    int choice;
    std::cin >> choice;

    switch (choice) {
      case 1: {
        std::cout << "Select a tree:" << std::endl;
        std::cout << "0. Oak\n1. Willow\n2. Birch" << std::endl;
        int choice;
        std::cin >> choice;
        database.Add(static_cast<Tree::eType>(choice));
        break;
      }
      case 2: {
        std::cout << "All trees in database:" << std::endl;
        database.DisplayAll();
        break;
      }
      case 3: {
        std::cout << "Enter name: ";
        string name;
        std::cin >> name;
        database.Display(name);
        break;
      }
      case 4: {
        std::cout << "0. Oak\n1. Willow\n2. Birch" << std::endl;
        int type;
        std::cin >> type;
        database.Display(static_cast<Tree::eType>(type));
        break;
      }
      case 5: {
        std::cout << "enter filename: ";
        std::string name;
        std::cin >> name;
        database.Load(name);
        break;
      }
      case 6: {
        std::cout << "enter filename: ";
        std::string name;
        std::cin >> name;
        database.Save(name);
        break;
      }
      case 7: {
        quit = true;
        break;
      }
    }

    std::cout << std::endl;
  }

  return 0;
}
