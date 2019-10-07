#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> myVector) {
  cout << "-- MyVector --" << endl;
  for (int i = 0; i < myVector.size(); i++) {
     cout << myVector.at(i) << "  ";
  }
  cout << endl << endl;
}

int main() {
   vector<int> myVector(5);
  
   myVector.at(0) = 122; 
   myVector.at(1) = 119; 
   myVector.at(2) = 117; 
   myVector.at(3) = 117; 
   myVector.at(4) = 116; 

   printVector(myVector);
   myVector.resize(2);
   printVector(myVector);
   myVector.resize(10);
   printVector(myVector);

   return 0;
}