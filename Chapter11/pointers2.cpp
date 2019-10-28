#include <iostream>

using namespace std;

int main()
{
  int variable = 100;
  int *ptr = &variable;

  // variable = 250;
  *ptr = 250;

  cout << "variable: " << variable << endl;
  cout << "variable ptr: " << *ptr << endl;

  return 0;
}