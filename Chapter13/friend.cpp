#include <iostream>

using namespace std;

class Employee {
  string name;

  public: 
    friend void print(Employee employee);
    void setName(string name) {
      this->name = name;
    }
};

void print(Employee employee) {
  cout << employee.name << endl;
}

int main(void) {
  Employee employee;
  
  employee.setName("Erik");

  print(employee);

  return 0;
}