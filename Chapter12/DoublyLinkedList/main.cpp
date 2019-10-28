#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
  LinkedList *list = new LinkedList();

  list->append(10);
  list->append(15);
  list->prepend(20);

  list->print();
  cout << endl;
  list->printReverse();

  // Node *found = list->search(15);

  // if (found) {
  //   cout << "Found node: " << found->data << endl;
  // }

  return 0;
}