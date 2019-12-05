#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> numbers) {
  for (int number: numbers) {
    cout << number << " ";
  }
  cout << endl << endl;
}

int main() {
  vector<int> numbers(10);
  for (int i = 0; i < numbers.size(); i++) {
    numbers.at(i) = i;
  }

  printVector(numbers);

  random_shuffle(numbers.begin(), numbers.end());

  printVector(numbers);

  return 0;
}