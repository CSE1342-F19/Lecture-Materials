#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char word[] = "hello";
  char word2[] = "hello";

  if (word == word2) {
    cout << "Equal!" << endl;
  } else {
    cout << "Not Equal!" << endl;
  }

  if (strcmp(word, word2) == 0) {
   cout << "Equal!" << endl;
  } else {
    cout << "Not Equal!" << endl;
  }
   

  return 0;
}