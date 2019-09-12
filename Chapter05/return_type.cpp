#include <iostream>

using namespace std;

int findMax(int num1, int num2) {
  return (num1 > num2) ? num1 : num2;
}

int main() {
  int first = 20;
  int second = 19;

  int max = findMax(first, second);

  cout << "Max # is " << max << endl;

  return 0;
}