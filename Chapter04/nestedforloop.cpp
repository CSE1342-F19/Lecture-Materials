#include <iostream>

using namespace std;

int main() {
  int count = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      for (int k = 0; k < 10; k++) {
        cout << "i, j, k => " << i << ", " << j << ", " << k << endl;  
        count++;    
      }
    }
  }

  cout << count << endl;
  return 0;
}