#include <iostream>

using namespace std;

int main() {
  int binary;
  
  // binary 5 = 0101 
  binary = 5;

  //   0101
  // & 0111
  binary = binary & 7;

  cout << binary << endl;
  return 0;
}