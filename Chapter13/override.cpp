#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
   void SetName(string newName) {
      itemName = newName;
   };
   
   void SetQuantity(int newQty) {
      itemQuantity = newQty;
   };
   
   void PrintItem() {
      cout << itemName << " " << itemQuantity << endl;
   };
   
protected:
   string itemName;
   int itemQuantity;
};

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
   void SetExpiration(string newDate) {
      expirationDate = newDate;
   };
   
   string GetExpiration() {
      return expirationDate;
   };
   
   void PrintItem()  {
      GenericItem::PrintItem();
      cout << " (Expires: " << expirationDate << ")"<< endl;
   };
   
private:
   string expirationDate;
};

int main() {
   GenericItem miscItem;
   ProduceItem perishItem;
   
   miscItem.SetName("Smith Cereal");
   miscItem.SetQuantity(9);
   miscItem.PrintItem();    // Calls GenericItem's PrintItem()
   
   perishItem.SetName("Apples");
   perishItem.SetQuantity(40);
   perishItem.SetExpiration("May 5, 2012");
   perishItem.PrintItem(); // Calls ProduceItem's PrintItem()

   // casting to generic item
   GenericItem *item = &perishItem;
   item->PrintItem();

   return 0;
}