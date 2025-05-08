#pragma once

#include <javaToCPP.h>
#include <iostream>

using std::string;
using std::array;

class Madlib {
private:
  const size_t madlibLen = 6;
  const array<string, 6> madlibMessage;
  const array<string, 6> madlibHint;
  array<string, 6> userResponses;
  bool promptFirst;

public:
  Madlib(bool promptFirst);

  void playMadlib(void);

  string getMadlibString(void);
};
