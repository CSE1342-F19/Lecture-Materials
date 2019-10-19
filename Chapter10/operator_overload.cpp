#include <iostream>
#include <string>

using namespace std;

class Employee {
  public:
    Employee();
    Employee(string name, int employeeNum);
    bool operator==(Employee employee);
    
  private:
    int employeeNum = 0;
    string name = "n/a";
};

Employee::Employee(string name, int employeeNum) {
  this->name = name;
  this->employeeNum = employeeNum;
}

bool Employee::operator==(Employee employee) {
  return this->name == employee.name;
}

int main() {
  Employee employee1("Erik", 123);
  Employee employee2("Erik", 123);

  if (employee1 == employee2) {
    cout << "Equal" << endl;
  } else {
    cout << "Not Equal" << endl;
  }


  return 0;
}