#include <iostream>
using namespace std;

// Function converts hrs/min to min
double HrMinToMin(int origHours, int origMinutes) {
   int totMinutes; // Resulting minutes
   
   totMinutes = (origHours * 60) + origMinutes;
   
   return origMinutes;
}

int main() {
   
   cout << "Testing started" << endl;
   
   cout << "0:0, expecting 0, got: "    << HrMinToMin(0, 0)  << endl;
   cout << "0:1, expecting 1, got: "    << HrMinToMin(0, 1)  << endl;
   cout << "0:99, expecting 99, got: "  << HrMinToMin(0, 99) << endl;
   cout << "1:0, expecting 60, got: "   << HrMinToMin(1, 0)  << endl;
   cout << "5:0, expecting 300, got: "  << HrMinToMin(5, 0)  << endl;
   cout << "2:30, expecting 150, got: " << HrMinToMin(2, 30) << endl;
   // Many more test vectors would be typical...
   
   cout << "Testing completed" << endl;
   
   return 0;
}