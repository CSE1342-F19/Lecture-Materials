#include <iostream>

using namespace std;

int main() {
  for(int i = 0; i < 20; i++) {
    if (i % 5 == 0) {
      continue;
    } 
    if (i == 9) {
      break;
    }
    cout << i << endl;
  }

  return 0;
}

