#include <iostream>
#include <string>

using namespace std;

class Employee {
  public:
    void Print();
    
  private:
    int employeeNum = 0;
    string name = "n/a";
};

void Employee::Print() {
  cout << name << " - #" << employeeNum << endl;
}

int main() {
  Employee accountant;

  accountant.Print();

  return 0;
}