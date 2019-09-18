#include <iostream>

using namespace std;

void Guess(int lowVal, int highVal) {
  int midVal = (highVal + lowVal) / 2;
  char response;
  
  cout << "Is your number " << midVal << "? (h/l/y)" << endl;
  cin >> response;

  if (response == 'y') {
    cout << "Yay!" << endl;
  } else if (response == 'h') {
    Guess(midVal, highVal);
  } else {
    Guess(lowVal, midVal);
  }
}

int main() {
  Guess(0, 100);
  return 0;
}