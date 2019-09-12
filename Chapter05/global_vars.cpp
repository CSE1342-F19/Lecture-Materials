#include <iostream>
#include <string>
using namespace std;

const int VAR = 100;

void printVar() {
  int VAR = 100;
  ///...
  
  cout << VAR << endl;
}

int main() {
  int VAR = 75;
  printVar();

  return 0;
}