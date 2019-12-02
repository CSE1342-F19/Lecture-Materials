#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
  list<int> flightNumbers;

  flightNumbers.push_back(123);
  flightNumbers.push_back(124);
  flightNumbers.push_back(632);
  flightNumbers.push_back(324);

  list<int>::iterator iter;
  iter = find(flightNumbers.begin(), flightNumbers.end(), 123);

  if (iter != flightNumbers.end()) {
    cout << "Found flight number at " << *iter << endl;
  } else {
    cout << "Flight Number Not found" << endl;
  }

  return 0;
}