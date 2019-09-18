#include <iostream>

int factorial(int n) {
  // base case
  if (n <= 1) {
    return 1;
  } else {
    // recursive case
    return n * factorial(n - 1);
  }
}

int main() {
  std::cout << factorial(5) << std::endl;
  return 0;
}