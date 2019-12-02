#include <iostream>
#include "vector.h"

int main() {
  Vector vector(10);
  vector.push_back(100);

  try {
    std::cout << "Value: " << vector.at(1) << std::endl;
  } catch (...) {
    std::cout << "Exception caught" << std::endl;
  }

  return 0;
}