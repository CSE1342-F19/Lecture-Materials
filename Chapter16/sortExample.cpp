#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Student {
   public:
      Student(string name1, string name2, int num);
      void SetStudentVals(string name1, string name2, int num);
      string GetFirstName();
      string GetLastName();
      int GetIdNum();
      void Print();
   private:
      string firstName;
      string lastName;
      int idNum;
};

Student::Student(string name1, string name2, int num) {
   firstName = name1;
   lastName = name2;
   idNum = num;
}

void Student::SetStudentVals(string name1, string name2, int num) {
   firstName = name1;
   lastName = name2;
   idNum = num;
}

string Student::GetFirstName() {
   return firstName;
}

string Student::GetLastName() {
   return lastName;
}
      
int Student::GetIdNum() {
   return idNum;
}
      
void Student::Print() {
   cout << firstName << " " << lastName << " (" << idNum << ")" << endl;
}


bool sortByFirstName (Student student1, Student student2) {
   return student1.GetFirstName() < student2.GetFirstName();
}

bool sortByLastName (Student student1, Student student2) {
   return student1.GetLastName() < student2.GetLastName();
}

bool sortByIdNum (Student student1, Student student2) {
   return student1.GetIdNum() < student2.GetIdNum();
}


int main() {
   unsigned int i;
   vector<Student> studentsVector;
   
   Student newStudent ("Sammy", "Hill", 1357);
   studentsVector.push_back(newStudent);
   
   newStudent.SetStudentVals("Jack", "Casella", 2468);
   studentsVector.push_back(newStudent);

   newStudent.SetStudentVals("Greta", "Phillips", 1928);
   studentsVector.push_back(newStudent);
   // studentsVector: Sammy Hill (id: 1357), Jack Casella (id: 2468), Greta Phillips (id: 1928)
   
   cout << "Sorted by first name:"<< endl;  
   sort(studentsVector.begin(), studentsVector.end(), sortByFirstName);
   // studentsVector: Greta Phillips (id: 19283), Jack Casella (id: 2468), Sammy Hill (id: 1357)
   
   for (i = 0; i < studentsVector.size(); ++i) {
      studentsVector.at(i).Print();
   }
   cout << endl;
   
   cout << "Sorted by last name:" << endl;
   sort(studentsVector.begin(), studentsVector.end(), sortByLastName);
   // studentsVector: Jack Casella (id: 2468), Sammy Hill (id: 1357), Greta Phillips (id: 1928)
   
   for (i = 0; i < studentsVector.size(); ++i) {
      studentsVector.at(i).Print();
   }
   cout << endl;
   
   cout << "Sorted by id number:" << endl;
   sort(studentsVector.begin(), studentsVector.end(), sortByIdNum);
   // studentsVector: Sammy Hill (id: 1357), Greta Phillips (id: 1928), Jack Casella (id: 2468)
   
   for (i = 0; i < studentsVector.size(); ++i) {
      studentsVector.at(i).Print();
   }
   cout << endl;
   
   return 0;
}