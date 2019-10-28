#include <iostream>

using namespace std;

int main()
{
  // declare some pointers
  int *ptr = new int(100);
  int *ptr2 = ptr;
  *ptr2 = 200;

  cout << "PTR: " << *ptr << endl;
  
  return 0;
}