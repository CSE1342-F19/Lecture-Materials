#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isFormattedNum(string num) {
   bool isMatch;
   
   isMatch = false;
   
   if (num.size() == 4) {
      if (isdigit(num.at(0)) && isdigit(num.at(1)) &&
          isdigit(num.at(3)) && num.at(2) == '.') {
         isMatch = true;
      }
   }
   
   return isMatch;
}

int main() {
   vector<string> numberStrings;
   vector<string>::iterator iter;

   // Adding strings
   numberStrings.push_back("fifty two point one");
   numberStrings.push_back("2.42");
   numberStrings.push_back("63.2");
   numberStrings.push_back("89.0");
   
   iter = find_if(numberStrings.begin(), numberStrings.end(), isFormattedNum);
   
   if (iter != numberStrings.end()) {
      cout << "The first ##.# formatted string is " << *iter << "." << endl;
   }
   else {
      cout << "No ##.# formatted strings found." << endl;
   }
   
   return 0;
}