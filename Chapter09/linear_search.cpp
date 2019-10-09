#include <iostream>

using namespace std;

int LinearSearch(int array[], int size, int key);

int main() {
  const int LIST_SIZE = 8;
  int list[LIST_SIZE] = { 2, 4, 7, 10, 11, 32, 45, 87 };
  
  int key = 10;
  // Search for item in list
  int indexFound = LinearSearch(list, LIST_SIZE, key);

  cout << "Found " << key << " at index " << indexFound << endl;

  return 0;
}

int LinearSearch(int array[], int size, int key) {
  int index = 0;
  for(; index < size; index++) {
    if (array[index] == key) {
      return index;
    }
  }

  return -1;
}