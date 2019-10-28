#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& data) {
  for (int i = 0; i < data.size(); i++) {
    cout << data.at(i) << " "; 
  }
  cout << endl;
}

int main() {
  vector<int> myVector = {55, 21};

  // APPEND 2
  myVector.push_back(2);
  printVector(myVector);

  // PREPEND 10
  myVector.insert(myVector.begin(), 10);
  printVector(myVector);

  // SEARCH 21
  int query = 21;
  int found = -1;
  for (int i = 0; i < myVector.size(); i++) {
    if (myVector.at(i) == query) {
      found = i;
      break;
    }
  }
  cout << "SEARCH 21: " << found << endl;
  
  return 0;
}