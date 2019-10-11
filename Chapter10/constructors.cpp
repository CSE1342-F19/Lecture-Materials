#include <iostream>
#include <string>

using namespace std;

class Employee {
  public:
    // TODO: Declare Default Constructor
    Employee();
    Employee(string employeeName, int id);
    void Print();
    
  private:
    int employeeNum;
    string name;
};

// TODO: Implement Default Constructor
Employee::Employee() {
  employeeNum = 0;
  name = "No Name";
}

Employee::Employee(string employeeName, int id) {
  employeeNum = id;
  name = employeeName;
}

void Employee::Print() {
  cout << name << " - " << employeeNum << endl;
}

int main() {
  Employee accountant("Erik", 123456);
  accountant.Print();

  return 0;
}