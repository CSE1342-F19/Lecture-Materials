#include <iostream>
using namespace std;

#include "Employee.h"

Employee::Employee() {
  name = "No Name";
  employeeNum = 1;
}

void Employee::Print() {
  cout << name << " - " << employeeNum << endl;
}