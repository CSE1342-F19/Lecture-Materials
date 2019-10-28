#include <iostream>

using namespace std;

class MyClass {
  public: 
    int* value;
    
    MyClass(const MyClass &copyClass);
    MyClass();
};

MyClass::MyClass() {
  value = new int(10);
}

MyClass::MyClass(const MyClass &copyClass) {
  value = new int;
  *value = *(copyClass.value);
}

void updateClass(MyClass localClass) {
  *(localClass.value) = 100;
}

int main() {
  MyClass *newClass = new MyClass;

  cout << "Value 1: " << *(newClass->value) << endl;
  updateClass(*newClass);
  cout << "Value 1 again: " << *(newClass->value) << endl;
  return 0;
}