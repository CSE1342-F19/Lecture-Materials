#include <iostream>
 
using namespace std;
 
class Line {
  public:
    double length;
};
 
// Main function for the program
int main() {
  Line line;
  line.length = 100;
  
  cout << line.length << endl;
   
  return 0;
}