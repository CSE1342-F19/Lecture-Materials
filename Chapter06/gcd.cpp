#include <iostream>
using namespace std;

/* Determine the greatest common divisor
   of two numbers, e.g. GCD(8, 12) = 4
*/
int GCD(int inNum1, int inNum2) {
   // define base case
   if (inNum1 == inNum2) {
      return inNum1;
   } else if (inNum1 > inNum2) {
      return GCD(inNum1 - inNum2, inNum2);
   } else {
      return GCD(inNum2 - inNum1, inNum1);
   }
}

int main() {
   int gcdInput1;     // First input to GCD calc
   int gcdInput2;     // Second input to GCD calc
   int gcdOutput;     // Result of GCD
   
   // Print program function
   cout << "Program outputs the greatest \n"
        << "common divisor of two numbers." << endl;
   
   // Prompt user for input
   cout << "Enter first number: ";
   cin >> gcdInput1;
   
   cout << "Enter second number: ";
   cin >> gcdInput2;
   
   // Check user values are > 1, call recursive GCD function
   if ((gcdInput1 < 1) || (gcdInput2 < 1)) {
      cout << "Note: Neither value can be below 1." << endl;
   }
   else {
      gcdOutput = GCD(gcdInput1, gcdInput2);
      cout << "Greatest common divisor = " << gcdOutput << endl;
   }
   
   return 0;
}