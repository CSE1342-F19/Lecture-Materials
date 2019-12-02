#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

class Student {
public: 
  int id;
  char* name;  

public: 
  Student(int id, char* name) {
    this->id = id;
    this->name = name;
  }

  char* getName() {
    return name;
  }

  int getId() {
    return id;
  }

  bool operator==(const Student &student) {
    if (this->getName() == student.name && this->getId() == student.id) {
      return true;
    }

    return false;
  }
};

int main() {
  list<Student> students;

  students.push_back(Student(123, "Erik"));
  
  list<Student>::iterator iter;
  iter = find(students.begin(), students.end(), Student(123, "Erik"));

  if (iter != students.end()) {
    cout << "Student " << iter->getName() << " found" << endl;
  } else {
    cout << "Student not found" << endl;
  }

  return 0;
}