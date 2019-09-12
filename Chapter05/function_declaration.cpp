#include <iostream>
#include <string>
using namespace std;

/** Fix the following **/
void printGreeting(int);
void callPrintGreeting();

int main() {
  
  callPrintGreeting();

  return 0;
}

void callPrintGreeting() {
  printGreeting(1);
}

void printGreeting(int value)  {
  cout << "Greeting" << endl;
}

