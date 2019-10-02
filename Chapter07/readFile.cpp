#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream inFS;   // Input file stream
   int fileNum;     // File data

   // Open file
   cout << "Opening file myfile.txt." << endl;
   inFS.open("myfile.txt");

   if (!inFS.is_open()) {
      cout << "Could not open file myfile.txt." << endl;
      return 1;
   }

   // Print read numbers to output
   cout << "Reading and printing numbers." << endl;

   while (!inFS.eof()) {
      inFS >> fileNum;
      if (!inFS.fail()) {
         cout << "num: " << fileNum << endl;
      } else {
        cout << "Invalid line" << endl;
        break;
      }
   }

   cout << "Closing file myfile.txt." << endl;

   // Done with file, so close it
   inFS.close();

   return 0;
}