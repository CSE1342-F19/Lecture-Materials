#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       

int main ()
{
  // srand (time(NULL));
  std::cout << "First: " << rand() % 100  << std::endl;
  std::cout << "Second: " << rand() % 100  << std::endl;
  // srand (1);
  std::cout << "Third: " << rand() % 100  << std::endl;

  return 0;
}