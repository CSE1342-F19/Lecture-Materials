#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  
  vector<string> authorsList;

  authorsList.push_back("Gamow");
  authorsList.push_back("Penrose");
  authorsList.push_back("Hawking");

  // authorsList.push_front("Greene");

  string name;
  vector<string>::iterator iter;
  // traverse list using iterators
  cout << "Iterators" << endl;
  for (iter = authorsList.begin(); iter != authorsList.end(); ++iter) {
    name = *iter;   
    cout << name << endl;
  }

  cout << endl;
  cout << "Range Based For Loop" << endl;

  // traverse list using range-based for loop
  for (string author : authorsList) {
    cout << author << endl;
  }

  return 0;
}