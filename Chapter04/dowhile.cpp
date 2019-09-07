#include <iostream>

using namespace std;

int main() {
  int count = 0;
  int num = 4; // what happens if num = 4?

  do {
    num--;
    count++;
  } while (num > 4);

  cout << count << endl;

  count = 0;
  num = 4;

  while (num > 4) {
    num--;
    count++;
  }

  // cout << count << endl;
  return 0;
}