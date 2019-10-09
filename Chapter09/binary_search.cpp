#include <iostream>

using namespace std;

int BinarySearch(int numbers[], int lb, int ub, int value);

int main() {
  const int LIST_SIZE = 8;
  int list[LIST_SIZE] = { 2, 4, 7, 10, 11, 32, 45, 87 };
  
  int key = 10;
  // Search for item in list
  int indexFound = BinarySearch(list, 0, LIST_SIZE, key);

  cout << "Found " << key << " at index " << indexFound << endl;

  return 0;
}

int BinarySearch(int numbers[], int lb, int ub, int value) {
  int half = 0;
  bool found = false;
  while (lb <= ub && !found) {
    half = (lb + ub) / 2;
    if (numbers[half] == value) {
      found = true;
    } else if (numbers[half] > value) {
      ub = half - 1;
    } else {
      lb = half + 1;
    }
  }

  return (found) ? half : -1;
}