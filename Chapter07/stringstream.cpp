#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string fullName;
  string firstName;
  string lastName;

  cout << "Enter your full name: ";
  getline(cin, fullName);

  istringstream inStream(fullName);

  inStream >> firstName;
  inStream >> lastName;

  cout << "First Name: " << firstName << endl;
  cout << "Last Name: " << lastName << endl;

  return 0;
}