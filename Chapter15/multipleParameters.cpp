#include <iostream>

using namespace std;

template<typename T1, typename T2>
void print(T1 val1, T2 val2, T2 val3, T2 val4) {
  cout << "Val 1: " << val1 << endl;
  cout << "Val 2: " << val2 << endl;
}

int main() {
  print('a', 2, 1, 2);
  
  return 0; 
}