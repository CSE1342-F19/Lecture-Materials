#include <iostream>

using namespace std;

class MyClass {
  public: 
    int* value;
    MyClass();
    MyClass(const MyClass& copy);
};

MyClass::MyClass() {
  value = new int(10);
}

MyClass::MyClass(const MyClass& copy) {
  // Shallow Copy
  // value = copy.value;

  // Deep Copy
  value = new int;
  *value = *(copy.value);
}

int main() {
  MyClass *classA = new MyClass;

  cout << "Class A value: " << *(classA->value) << endl;

  MyClass * classB = new MyClass(*classA);

  // with shallow copy this will effect classA value as
  *(classB->value) = 25;

  cout << "Class A value: " << *(classA->value) << endl;
  return 0;
}