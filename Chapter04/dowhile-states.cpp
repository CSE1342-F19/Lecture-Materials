#include <iostream>

using namespace std;

int main() {
  char input;

  do {
    cout << "Input: ";
    cin >> input;
    cout << "Output: " << input << endl;

  } while (input != 'q');

  return 0;
}