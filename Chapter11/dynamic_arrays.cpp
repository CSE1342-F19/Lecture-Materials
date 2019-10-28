#include <iostream>

using namespace std;

void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " "; 
  }
  cout << endl;
}

void printArrayAddresses(int *array, int size) {
for (int i = 0; i < size; i++) {
    cout << &array[i] << " "; 
  }
  cout << endl;
}

int main()
{
  const int ARRAY_SIZE = 5;
  int *array = new int[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; i++) {
    array[i] = i;
  }
  
  printArray(array, ARRAY_SIZE);
  printArrayAddresses(array, ARRAY_SIZE);
  return 0;
}