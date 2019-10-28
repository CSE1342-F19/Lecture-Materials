#include <iostream>
using namespace std;

class SimpleItem {
public:
   void PrintNums();
   SimpleItem(int initVal1 = -1, int initVal2 = -1);
private:
   int num1;
   int num2;
};

SimpleItem::SimpleItem(int initVal1, int initVal2) {
   num1 = initVal1;
   num2 = initVal2;
}

void SimpleItem::PrintNums() {
   cout << "num1: " << num1 << endl;
   cout << "num2: " << num2 << endl;
}

int main() {
   SimpleItem* myItemPtr1 = nullptr;
   SimpleItem* myItemPtr2 = nullptr;
   
   myItemPtr1 = new SimpleItem;
   (*myItemPtr1).PrintNums();
   cout << endl;
   
   myItemPtr2 = new SimpleItem(8, 9);
   myItemPtr2->PrintNums();
   
   return 0;
}