#include <iostream>

int main()
{
  // delete a pointer
  int *ptr = new int(1);
  delete ptr;
  ptr = new int(2);
  
  std::cout << *ptr;

  // delete an array
  int *array = new int[5];
  delete[] array;

  return 0;
}