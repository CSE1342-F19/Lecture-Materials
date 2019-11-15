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
   
private:
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
   
private:
   string expirationDate;
};

int main() {
   GenericItem miscItem;
   ProduceItem perishItem;
   
   miscItem.SetName("Smith Cereal");
   miscItem.SetQuantity(9);
   miscItem.PrintItem();
   
   perishItem.SetName("Apples");
   perishItem.SetQuantity(40);
   perishItem.SetExpiration("May 5, 2012");
   perishItem.PrintItem();
   cout << "  (Expires: " << perishItem.GetExpiration()
   << ")" << endl;
   
   return 0;
}