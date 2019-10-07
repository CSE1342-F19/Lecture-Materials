#include <iostream>

using namespace std;

int main() {
  const int ARRAY_SIZE = 10;
  int myArray[ARRAY_SIZE];

  // print out contents of array - contents unknown
  for (int i = 0; i < ARRAY_SIZE; i++) {
    cout << myArray[i] << endl;
  }

  // const int ARRAY_SIZE = 5;
  // int myArray[ARRAY_SIZE];
  // int myArray[ARRAY_SIZE] = { 1, 2, 3, 4, 5};

  int myArray2[ARRAY_SIZE] { 1, 2, 3, 4, 5};
  
  return 0;
}