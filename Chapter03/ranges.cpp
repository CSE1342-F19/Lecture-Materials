#include <iostream>

using namespace std;

int main() {
  int age;
  cout << "Enter in your age: ";
  cin >> age;

  if (age < 25) {
    cout << "Generation Y" << endl;
  } else if (age < 40) {
    cout << "Generation X" << endl;
  } else if (age < 55) {
    cout << "Baby Boomer" << endl;
  } else {
    cout << "Other" << endl;
  }

  return 0;
}