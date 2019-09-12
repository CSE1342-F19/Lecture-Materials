#include <iostream>
using namespace std;

int add(int x, int y = 0, int z, int a = 0);

int main() {
  
  cout << add(1, 2) << endl;
  cout << add(1, 2, 3) << endl;
  cout << add(1, 2, 3, 4) << endl;

  return 0;
}

int add(int x, int y, int z, int a) {
  return x + y + z + a;
}