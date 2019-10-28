#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
  LinkedList *list = new LinkedList();

  list->append(10);
  list->append(15);

  list->print();

  // delete
  // cout << "\nRemove" << endl;
  // list->remove();
  // list->print();

  return 0;
}