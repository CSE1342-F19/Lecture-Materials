#include <iostream>

using namespace std;

int binarySearch(int numbers[], int lb, int ub, int value) {
  int half;
  if (lb > ub) {
    return -1;
  }
  half = (lb + ub) / 2;
  if (numbers[half] == value) {
    return half;
  } else if (numbers[half] > value) {
    return binarySearch(numbers, lb, half - 1, value);
  } else {
    return binarySearch(numbers, half + 1, ub, value);
  }
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