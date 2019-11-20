#include <iostream>

using namespace std;

int main() {
  int cost;
  int numItems;

  cout << "Enter the price of your item: $";
  cin >> cost;
  cout << "How many items did you purchase? ";
  cin >> numItems;

  cout << "Total Cost: " << cost * numItems << endl;

  return 0;
}