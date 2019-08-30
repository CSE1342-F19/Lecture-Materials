#include <iostream>
#include <string>

using namespace std;

int main() {
  string fullName;

  cout << "Please Enter Full Name: " << endl;
  // cin >> fullName;
  getline(cin, fullName);

  cout << "Hello " << fullName << endl;

  return 0;
}