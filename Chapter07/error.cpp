
#include <iostream>
#include <limits>
using namespace std;

int main() {
   int number;
   
   cout << "Enter a number: " << endl;
   cin >> number;
   
   while (cin.fail()) {
      // Clear error state
      cin.clear();

      // Ignore characters in stream until newline
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
      cout << "Try again: " << endl;
      cin  >> number;
   }
   
   cout << "You entered: " << number << endl;
   
   return 0;
}