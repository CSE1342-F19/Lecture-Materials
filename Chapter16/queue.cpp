#include <iostream>
#include <queue>

using namespace std;

int main() {
   
  queue<string> waitList;

  waitList.push("Neumann party of 1");
  waitList.push("Amdahl party of 2");
  waitList.push("Flynn party of 4");

  while (waitList.size() > 0) {
    cout << "Serving: " << waitList.front() << endl;
    waitList.pop();
  }
   
  return 0;
}