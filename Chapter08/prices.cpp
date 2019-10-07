#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <ios>

using namespace std;

int main() {
  vector<string> items = { "burger", "hotdog", "fries", "soda" };
  vector<double> prices = { 5.50, 3.50, 2.99, 1.99 };

  // setting precision
  cout << fixed;
  cout << setprecision(2);

  for(int i = 0; i < items.size(); i++) {
    cout << i << ". " << items.at(i) << " - $" << prices.at(i) << endl;
  }
  cout << "What would you like to buy?:" << endl;
  int choice;
  cin >> choice;

  cout << "Your total is $" << prices.at(choice) << endl;
    
  return 0;
}