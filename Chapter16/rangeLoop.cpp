#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> teamRoster;
   
  // Adding player names
  teamRoster.push_back("Mike");
  teamRoster.push_back("Scottie");
  teamRoster.push_back("Toni");
    
  cout << "Current roster: " << endl;
    
  for (string playerName : teamRoster) {
    cout << playerName << endl;
  }

  return 0;
}