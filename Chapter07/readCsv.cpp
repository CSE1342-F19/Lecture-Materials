#include <iostream>
#include <fstream>

using namespace std;

int main() {
   ifstream inputFile;   // Input file stream
   int fileNum;     // File data

   inputFile.open("input.txt"); 

   while (!inputFile.eof()) {
      string column1;
      getline(inputFile, column1, ',');

      string column2;
      getline(inputFile, column2, ',');

      string column3;
      getline(inputFile, column3, ',');

      cout << "Line 1: "; 
      cout << column1 << ", ";
      cout << column2 << ", ";
      cout << column3 << endl;
   }

   cout << "Closing file myfile.txt." << endl;

   // Done with file, so close it
   inputFile.close();

   return 0;
}