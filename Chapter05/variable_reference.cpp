#include <iostream>
#include <string>
using namespace std;

int main() {
  /**
   * Primitives
   * */
  int originalVal = 100;
  int& copyValRefence = originalVal;
  int copyValValue = originalVal;

  originalVal += 200;
  cout << originalVal << " " << copyValRefence << " " << copyValValue << endl;

  /**
   * Can also reference strings or objects
   * */
  string newString = "";
  string &copyString = newString;

  newString = "Hello";
  cout << copyString << endl;

  
  return 0; 
}