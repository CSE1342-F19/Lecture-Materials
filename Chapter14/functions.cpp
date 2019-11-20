#include <iostream>
#include <exception> // used for runtime_error and exception type

using namespace std;
int getPrice() throw (runtime_error);

int getPrice() throw (runtime_error)  {
  int cost;
  cout << "Enter the price of your item: $";
  cin >> cost;

  if (cost < 0) {
    throw runtime_error("Cost is < 0");
  }

  return cost;
}

int getNumItems() {
  int numItems;
  cout << "Enter in the # of items that you purchased: ";
  cin >> numItems;

  if (numItems < 0) {
    throw runtime_error("Number of Items is < 0");
  }

  return numItems;
}

int main() {
  int cost = getPrice();
  int numItems = getNumItems();
  
  try {
    int cost = getPrice();
    int numItems = getNumItems();

    cout << "Total Cost: " << cost * numItems << endl;
  } catch (exception &e) {
    cout << e.what() << endl;
  }
  

  return 0;
}