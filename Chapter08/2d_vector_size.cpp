// C++ code to demonstrate 2D vector where 
// each row is of different size. 
#include <iostream> 
#include <vector> // for 2D vector 
using namespace std; 
  
int main() 
{ 
    // Initializing 2D vector "vect" with 
    // different number of values in each 
    // row. 
    vector<vector<int> > vect{ { 1, 2 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9, 10 } }; 
  
    // Displaying the 2D vector 
    for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } 
  
    return 0; 
}