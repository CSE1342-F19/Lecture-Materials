#include <iostream>

using namespace std;

int main() {
  char input;

  cout << "Enter a number: ";
  cin >> input;
  int sum = 0;

  while (input != 'q') {
    if (input < 'a') {
      int inputNumber = (int)input - 48;

      sum += inputNumber;
      cout << "New Sum: " << sum << endl;
    }

    cout << "Enter a number: ";
    cin >> input; 
  }

  return 0;
}