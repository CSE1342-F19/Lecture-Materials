// out_of_range example
#include <iostream>       // std::cerr
#include <stdexcept>      // std::out_of_range
#include <vector>         // std::vector

int main (void) {
  std::vector<int> myvector(10);
  try {
    myvector.at(20)=100;      // vector::at throws an out-of-range
  }
  catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }
  return 0;
}