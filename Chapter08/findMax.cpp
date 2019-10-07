#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals(8);
   
   cout << "Enter " << 8 << " integer numbers..." << endl;
   for (int i = 0; i < userVals.size(); i++) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }
   
   // Determine largest (max) number
   int maxVal = userVals.at(0);        
   for (int i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
   }
   cout << "Max: " << maxVal << endl;
   
   return 0;
}