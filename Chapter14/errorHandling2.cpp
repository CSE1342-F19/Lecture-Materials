#include <iostream>
#include <exception> // used for runtime_error and exception type

using namespace std;

int main() {
  int cost;
  int numItems;
  int *value;
  try {
    cout << "Enter the price of your item: $";
    cin >> cost;
    value = new int(10);

    if (cost < 0) {
      throw runtime_error("Cost is < 0");
    }

    cout << "How many items did you purchase? ";
    cin >> numItems;

    if (numItems < 0) {
      throw runtime_error("Number of Items is < 0");
    }

    cout << "Total Cost: " << cost * numItems << endl;
    delete value; 
  } catch (runtime_error &e) {
    cout << "UH OH YOU MESSED UP!" << endl;
     delete value;
  } catch (exception &e) {
    cout << e.what() << endl;
     delete value;
  }
  

  return 0;
}