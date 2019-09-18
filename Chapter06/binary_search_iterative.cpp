#include <iostream>

using namespace std;

int binarySearch(int numbers[], int lb, int ub, int value) {
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

int main() {
  int values[9] = { 1, 2, 3, 4, 6, 7, 8, 9, 10};
  int length = 9;

  int result = binarySearch(values, 0, length - 1, 6);
  int result2 = binarySearch(values, 0, length - 1, 5);

  cout << "Found 6: @ index " << result << endl;
  cout << "Found 5: @ index " << result2 << endl;
  return 0;
}