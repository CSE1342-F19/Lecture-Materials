#include <iostream>
using namespace std;

void DatePrint(int currDay, int currMonth, int currYear) {

   // Parameter error checking
   if ((currDay < 1) || (currDay > 31)) {
      cout << "Invalid day (" << currDay << "). Using 1." << endl;
      currDay = 1;
   }

   if ((currMonth < 1) || (currMonth > 12)) {
      cout << "Invalid month (" << currMonth << "). Using 1." << endl;
      currMonth = 1;
   }

   // Begin function's normal behavior
   cout << currMonth << "/" << currDay << "/" << currYear;
}


int main() {

   DatePrint(30, 7, 2012);
   cout << endl << endl;

   DatePrint(40, 7, 2012);
   cout << endl << endl;

   DatePrint(30, 13, 2012);
   cout << endl << endl;

   return 0;
}