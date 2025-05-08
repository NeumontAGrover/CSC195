#include "madlib.h"

Madlib::Madlib(bool promptFirst) :
  madlibMessage{
    {
      " and ",
      " are going to make a sandwich. First, they put on ",
      ". Then, they add some ",
      " and ",
      ". Their snadwiches are ",
      "!"
    }
  }, madlibHint{
    {
      "Noun",
      "Noun",
      "Noun",
      "Noun",
      "Noun",
      "Adjective"
    }
  } {
    this->promptFirst = promptFirst;
  }

void Madlib::playMadlib() {
  std::cout << "Let's play with madlibs!" << std::endl;
  int startResponsesAt = this->promptFirst ? 1 : 0;

  if (this->promptFirst) {
    std::cout << madlibHint[0] << std::endl;
    std::getline(std::cin, userResponses[0]);
  }

  for (size_t i = 0; i < madlibLen; i++) {
    size_t responseIndex = startResponsesAt + i;
    if (responseIndex < madlibLen) {
      std::cout << madlibHint[responseIndex] << std::endl;
      std::getline(std::cin, userResponses[responseIndex]);
    }
  }
}

string Madlib::getMadlibString() {
  string finalMadlib = "";
  
  for (size_t i = 0; i < madlibLen; i++) {
    if (this->promptFirst) {
      finalMadlib += this->userResponses[i];
      finalMadlib += this->madlibMessage[i];
    } else {
      finalMadlib += this->madlibMessage[i];
      finalMadlib += this->userResponses[i];
    }
  }

  return finalMadlib;
}
