#include <iostream>
#include <string>

using namespace std;

template<typename T>
T add(T val1, T val2) {
  return val1 + val2;
}

// Full Specialization of add function for char
template<>
char add(char val1, char val2) {
  return val1;
}

// Partial Specialization - To represent adding pointers
template<typename T>
T add(T* val1, T* val2) {
  return *val1 + *val2;
}

int main() {
  string val1 = "hello";
  string val2 = "world";

  cout  << add(100, 200) << endl;
  cout  << add('a', 'z') << endl;
  cout  << add(val1, val2) << endl;
  cout  << add(200.00, 200.01) << endl;

  int *ptr1 = new int(10);
  int *ptr2 = new int(20);

  cout  << add(ptr1, ptr2) << endl;
  return 0;
}