#include <iostream>
#include <cstring>

using namespace std;

// Implement strlen()
int stringLength(char word[]) {
  int length = 0;
  while(word[length] != '\0') {
    length++;
  }

  return length;
}

int main() {
  char word[] = "hello";

  cout << "Size of word: " << sizeof(word) << endl;
  cout << "Our String Length: " << stringLength(word) << endl;
  cout << "strlen: " << strlen(word) << endl;

  return 0;
}