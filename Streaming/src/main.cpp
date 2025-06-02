#include <Streaming.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Write(ostream& os, const string& text) {
    os << text << endl;
}

int main(int argc, char *argv[]) {
  string text = "Hello World!";
  cout << text << endl;

  // Listens until whitespace
  // cin >> text;

  // Listens until a newline
  // getline(cin, text);

  // cout << text << endl;
  // clock_t start = clock();
  // for (int i = 0; i < 10000000; i++)
  //   Write(cout, text);

  // clock_t end = clock();
  // cout << "Elapsed Time: " << (end - start) / (double)CLOCKS_PER_SEC << endl;

  // Output to file
  // ofstream output("data.txt");
  // output << text;
  // output.close();

  // Input from file
  ifstream input("data.txt");

  while (!input.eof()) {
    getline(input, text);
    cout << text << endl;
  }

  input.close();
  return 0;
}
