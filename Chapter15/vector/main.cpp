#include <iostream>
#include "vector.h"

int main() {
  Vector<int> vector(5);
  vector.push_back(100);
  vector.push_back(150);
  vector.push_back(120);

  for (int i = 0; i < vector.getLength(); i++) {
    std::cout << vector.at(i) << std::endl;
  }

  return 0;
}