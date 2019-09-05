#include <iostream>
using namespace std;

int main() {
  int userChoice;
  int numItems = 5;

  cout << "Enter a number between 1 - 10";
  cin >> userChoice;


  if (userChoice == 1) { // userChoice is 1     

  } else if (userChoice == 2) {
    if (numItems < 0) { // userChoice is 2 and numItems < 0
        
    } else {              // userChoice is 2 and numItems >= 0
      
    }
  } else {                 // userChoice is not 1 or 2
    
  }

  return 0;
}