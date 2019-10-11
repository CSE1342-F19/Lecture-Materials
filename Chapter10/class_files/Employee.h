#ifndef STOREITEM_H
#define STOREITEM_H

#include <string>

class Employee {
  public:
    Employee();
    void Print();
    
  private:
    int employeeNum;
    std::string name;
};

#endif