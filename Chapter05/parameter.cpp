#include <iostream>
#include <string>
using namespace std;

void printNewValue(int value) {
  value += 10;
  cout << "Function Value: " << value << endl;
}

int main() {
  int num1 = 100;
  printNewValue(num1);

  cout << "Main Function Value: " << num1 << endl;

  return 0;
}