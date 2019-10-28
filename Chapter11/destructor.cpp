#include <iostream>

using namespace std;

class MyClass {
  private:
    int* value;
  public: 
    MyClass();
    ~MyClass();
};

MyClass::MyClass() {
  value = new int(10);
}

MyClass::~MyClass() { 
  cout << "destructor called" << endl;
  delete value;
}

int main() {
  MyClass *newClass = new MyClass;

  for (int i =0; i < 100; i++) {
    int *x = new int(100);
    
  }

  delete newClass;

  return 0;
}