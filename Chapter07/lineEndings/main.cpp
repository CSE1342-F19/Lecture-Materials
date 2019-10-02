#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {
  vector<string> data;

  ifstream inFS;   // Input file stream
  inFS.open("inputCLRF.txt"); // \r

  while (!inFS.eof()) {
    string tempString;
    getline(inFS, tempString);
    data.push_back(tempString);
  }

  for (int i = 0; i < data.size(); i++) {
    cout << data.at(i) << "|" << endl; 
  }

  inFS.close();

  return 0;
}