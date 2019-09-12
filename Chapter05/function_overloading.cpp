#include <iostream>

using namespace std;

void DatePrint(int day, int month, int year) {
   cout << "1" << endl;
}

void DatePrint(int day, string month, int year) {
   cout << "2" << endl;
}

void DatePrint(int month, int day) {
   cout << "3" << endl;
}

int main() {
  DatePrint(30, 7, 2012); // 1
  DatePrint(30, "July", 2012); // 2
  DatePrint(7, 2012); // 3
  DatePrint(30, 7); // 3
  // DatePrint("July", 2012);
  return 0;
}