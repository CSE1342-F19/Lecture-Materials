#include <iostream> 

using namespace std;

void reverseAlphabet(char character) {
  if (character == 'a') {
    cout << character << endl;
  } else {
    cout << character;
    reverseAlphabet(character - 1);
  }
}

int main() {
  reverseAlphabet('t');

  return 0;
}