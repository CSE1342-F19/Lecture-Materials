#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a Number between 0 and 2" << endl;
  cin >> num;

  if (num == 0) {
    // Print "zero"
    cout << "zero" << endl;
  } else if (num == 1) {
    // Print "one"
    cout << "one" << endl;
  } else if (num == 2) {
    // Print "two"
    cout << "two" << endl;
  } else {
    // Print "invalid input"
      cout << "invalid input" << endl;
  }

  switch (num) {
    case 0:
      // Print "zero"
      cout << "zero" << endl;
      break;

    case 1:
      // Print "one"
      cout << "one" << endl;
      break;

    case 2:
      // Print "two"
      cout << "two" << endl;
      break;

    default:
      // Print "invalid input"
      cout << "invalid input" << endl;
      break;
  }
  return 0;
}