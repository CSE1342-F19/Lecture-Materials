#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

    virtual void print() {
      cout << "Name: " << name << endl; 
    }
};

class Student: public Person {
  public: 
    int studentId;

    // calls base class constructor 
    Student(int studentId, string name, string phoneNumber, int age): Person(name, phoneNumber, age) {
      this->studentId = studentId;
    }

    void print() {
      Person::print();
      cout << "StudentId: " << studentId << endl;
    }
};

int main() {
  Person *person = new Person("Person", "--", 20);
  Student *student = new Student(321, "Student", "--", 19);;

  vector<Person*> people;
  people.push_back(person);
  people.push_back(student);

  for (int i = 0; i < people.size(); i++) {
    people.at(i)->print();
    cout << endl;
  }

  return 0;
}