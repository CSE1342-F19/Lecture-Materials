#include <iostream>
using namespace std;

int main() {
  int totalScore = 100;
  cout << "Total Score Pre Increment: " << ++totalScore << endl;
  totalScore = 100;
  cout << "Total Score Post Increment: " << totalScore++ << endl;
  cout << "Total Score Post Increment: " << totalScore << endl;
  totalScore = 100;
  cout << "Total Score Pre Decrement: " << --totalScore << endl;
  totalScore = 100;
  cout << "Total Score Post Decrement: " << totalScore-- << endl;

  return 0;
}