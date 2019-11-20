#include <iostream>

using namespace std;

int main() {
  int cost;
  int numItems;

  cout << "Enter the price of your item: $";
  cin >> cost;

  if (cost > 0) {
    cout << "How many items did you purchase? ";
    cin >> numItems;

    if (numItems > 0) {
      cout << "Total Cost: " << cost * numItems << endl;
    } else {
      cout << "Invalid input" << endl;
    }
  } else {
    cout << "Invalid input" << endl;
  }
  

  return 0;
}