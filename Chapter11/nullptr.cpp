#include <iostream>

int main()
{
  int *ptr;
  double *doublePtr = nullptr;

  std::cout << ptr << std::endl;
  std::cout << *doublePtr << std::endl;

  return 0;
}