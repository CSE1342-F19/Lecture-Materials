#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

int main() {
   
   double milesTrvld;

   milesTrvld = 765.4321;
   
   cout << "setprecision(p) -- Sets # digits" << endl;
   cout << milesTrvld << " (default p is 6)" << endl;
   cout << setprecision(8) << milesTrvld << " (p = 8)" << endl;
   cout << setprecision(5) << milesTrvld << " (p = 5)" << endl;
   cout << setprecision(2) << milesTrvld << " (p = 2)"
        << " (note rounding)" << endl;
   cout << milesTrvld << " (manipulator persists)" << endl << endl;
   
   cout << setprecision(2);
   cout << "(For following, p = 2 applies to fraction only)" << endl;
   
   // fixed -- uses fixed point notation
   cout << fixed;
   cout << "fixed: " << milesTrvld << endl;
   
   // scientific -- uses scientific notation
   cout << scientific;
   cout << "scientific: " << milesTrvld << endl;
   
   return 0;
}