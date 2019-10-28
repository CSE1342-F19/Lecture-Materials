#include <iostream>

using namespace std;

class MyClass {
  public: 
    int* value;

    MyClass();
    MyClass& operator=(const MyClass& copy);
    ~MyClass();
};

MyClass::MyClass() {
  value = new int(10);
}

MyClass& MyClass::operator=(const MyClass& copy) {
  cout << "Assignment op called." << endl << endl;
  
  if (this != &copy) {             // 1. Don't self-assign
    delete value;                  // 2. Delete old dataObj
    value = new int;               // 3. Allocate new dataObj
    *value = *(copy.value);        // 4. Copy dataObj
  }
  
  return *this;
}

MyClass::~MyClass() { 
  delete value;
}

int main() {
  MyClass classA;
  MyClass classB;

  cout << "ClassA->value: " << *(classA.value) << endl;
  cout << "ClassB->value: " << *(classB.value) << endl << endl;

  *(classA.value) = 200;
  classB = classA;

  cout << "ClassA->value: " << *(classA.value) << endl;
  cout << "ClassB->value: " << *(classB.value) << endl << endl;
  
  *(classB.value) = 24;

  cout << "ClassA->value: " << *(classA.value) << endl;
  cout << "ClassB->value: " << *(classB.value) << endl;

  return 0;
}