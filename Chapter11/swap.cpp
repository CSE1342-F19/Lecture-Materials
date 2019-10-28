#include <iostream>

using namespace std;

void swap(int *a, int *b) {
  // implement swap
  int temp = *a; 
  *a = *b;
  *b = temp;
}

int main()
{
  int *ptrA = new int(100);
  int *ptrB = new int(200);

  cout << "A: " << *ptrA << endl;
  cout << "B: " << *ptrB << endl;

  swap(ptrA, ptrB);

  cout << "A: " << *ptrA << endl;
  cout << "B: " << *ptrB << endl;

  return 0;
}