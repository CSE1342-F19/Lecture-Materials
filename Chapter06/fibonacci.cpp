#include <iostream> 

using namespace std;

int fib(int num) { 
  if (num <= 1) 
    return num; 
  return fib(num-1) + fib(num-2); 
}

int main() {
  for(int i = 0; i < 10; i++ ) {
    cout << fib(i) << " ";
  }
  cout << endl;
  return 0;
}