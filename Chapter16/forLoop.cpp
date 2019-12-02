#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> teamRoster;
  string playerName;
  unsigned int i;
    
  // Adding player names
  teamRoster.push_back("Mike");
  teamRoster.push_back("Scottie");
  teamRoster.push_back("Toni");
    
  cout << "Current roster: " << endl;
    
  for (i = 0; i < teamRoster.size(); ++i) {
    playerName = teamRoster.at(i);
    cout << playerName << endl;
  }

  return 0;
}