#include <iostream>

using namespace std;

class CustomException {
  int errorCode;
  char* errorMessage;

  public: 
    CustomException(int errorCode, char* errorMessage) {
      this->errorCode = errorCode;
      this->errorMessage = errorMessage;
    }

    void printError() {
      cout << "ERROR CODE: " << errorCode << endl;
      cout << "ERROR MSG: " << errorMessage << endl;
    }
};

int main() {
  int cost;
  int numItems;
  try {
    cout << "Enter the price of your item: $";
    cin >> cost;

    if (cost < 0) {
      throw CustomException(1, (char *)"Cost is < 0");
    }

    cout << "How many items did you purchase? ";
    cin >> numItems;

    if (numItems < 0) {
      throw CustomException(2, (char *)"Number of Items is < 0");
    }

    cout << "Total Cost: " << cost * numItems << endl;
  } catch (CustomException &e) {
    e.printError();
  }
  

  return 0;
}