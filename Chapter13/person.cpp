#include <iostream>
#include <string>

using namespace std;

class Person {
  public: 
    string name;
    string phoneNumber;
    int age;
};

class Student: public Person {
  public: 
    int studentId;
};

class Professor: public Person {
  public:
    int facultyId;
};

int main() {
  Person person;
  Student student;
  Professor professor;

  return 0;
}