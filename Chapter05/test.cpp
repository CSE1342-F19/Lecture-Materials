#include <iostream>
#include <cassert>

using namespace std;

int sum(int val1, int val2) {
  if (val1 <= 0 || val2 <= 0) {
    cout << "Must be positive" << endl;
    return 1;
  } else {
    return val1 + val2;
  }

}

int main() {

   assert(sum(10,20) == 30);
   assert(sum(-1,20) == 1);

   return 0;
}

// Normally lots of other code here