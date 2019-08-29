#include <iostream>
using namespace std;

int main() {
  int numClasses;
  int hours = 3;

  cout << "How many classes are you taking? ";
  cin >> numClasses;

  int enrolledHours = numClasses * hours;

  cout << "You are enrolled in " << enrolledHours << " hours" << endl;

  return 0;
}