#include <iostream>
#include <string>


using namespace std;

int main() { 
  string phrase = "Enter a word";
  char input;
  
  while (input != 'q') {
    cout << "Guess a letter: ";
    cin >> input;

    if (input == 'q') {
      break;
    }
    
    int index = phrase.find(input);
    if (index == string::npos) {
      cout << "Miss!";
    } else {
      cout << "Hit!";
    }
  } 
 
  return 0;
}