#include <iostream>

int main()
{
  int *ptr;
  
  ptr = new int;
  // *ptr = 100;

  char* cPtr;
  // cPtr = new int;

  std::cout << *ptr << std::endl;

  return 0;
}