#include <iostream>

using namespace std;

int main() {
  int dividend = 25;
  int divisor = 4;

  int quotient = dividend / divisor;
  int remainder = dividend % divisor;

  cout << quotient << endl;
  cout << remainder << endl;
  return 0;
}