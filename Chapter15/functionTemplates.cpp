#include <iostream>

using namespace std;

// int findMax(int val1, int val2) {
//   if (val1 > val2) {
//     return val1;
//   } else {
//     return val2;
//   }
// }

// char findMax(char val1, char val2) {
//   if (val1 > val2) {
//     return val1;
//   } else {
//     return val2;
//   }
// }

// double findMax(double val1, double val2) {
//   if (val1 > val2) {
//     return val1;
//   } else {
//     return val2;
//   }
// }

// -- Make a templated function for findMax
template<typename T>
T findMax(T val1, T val2) {
  if (val1 > val2) {
    return val1;
  } else {
    return val2;
  }
}

int main() {
  // find max int
  cout  << findMax(200.00, 200.01) << endl;
  cout  << findMax(100, 200) << endl;

  // find max char
  cout  << findMax('a', 'z') << endl;

  // find max double
  cout  << findMax(200.00, 200.01) << endl;
  return 0;
}