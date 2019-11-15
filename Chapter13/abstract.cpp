#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Because of Pure virtual function this is now an Abstract Class
class Person {
  public: 
    string name;
    string phoneNumber;
    int age;

    Person(string name, string phoneNumber, int age) {
      this->name = name;
      this->phoneNumber = phoneNumber;
      this->age = age;
    }

    // pure virtual function
    virtual void print() = 0;
};

class Student: public Person {
  public: 
    int studentId;

    Student(int studentId, string name, string phoneNumber, int age): Person(name, phoneNumber, age) {
      this->studentId = studentId;
    }

    void print() {
      cout << "StudentId: " << studentId << endl;
    }
};

class Professor: public Person {
  public:
    int facultyId;

    Professor(int facultyId, string name, string phoneNumber, int age): Person(name, phoneNumber, age) {
      this->facultyId = facultyId;
    }

    void print() {
      cout << "FacultyId: " << facultyId << endl;
    }
};

int main() {
  // Notice we can't create an instance of an Abstract class
  // Person *person = new Person("Person", "--", 20);

  Student *student = new Student(321, "Student", "--", 19);
  Professor *professor = new Professor(123, "Professor", "--", 40);

  vector<Person*> people;
  people.push_back(student);
  people.push_back(professor);

  for (int i = 0; i < people.size(); i++) {
    people.at(i)->print();
    cout << endl;
  }

  return 0;
}