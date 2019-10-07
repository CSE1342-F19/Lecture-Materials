#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> myVector(5);
  
   myVector.at(0) = 122; 
   myVector.at(1) = 119; 
   myVector.at(2) = 117; 
   myVector.at(3) = 117; 
   myVector.at(4) = 116; 

   cout << "Try to access " << myVector.at(7) << endl;


   return 0;
}