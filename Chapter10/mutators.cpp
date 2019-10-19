#include <iostream>
#include <string>
using namespace std;

class Student {
   private: 
      string name = "No Name";
      int smuId = 0;

   public:
      void   SetName(string fullName); // Mutator
      void   SetId(int id);            // Mutator
      
      string GetName() const;          // Accessor
      int    GetId() const;            // Accessor
      void   Print() const;            // Accessor

};

void Student::SetName(string fullName) {
  if (fullName.length() < 1) {
    cout << "Error";
  } else {
    name = fullName;
  }
}

void Student::SetId(int id) {
  smuId = id;
}

string Student::GetName() const {
  return name;
}

int Student::GetId() const {
  return smuId;
}

void Student::Print() const {
  cout << GetName() << " -- " << GetId() << endl;
}

int main() {
  Student student1;
  student1.GetName();

  student1.SetName("Erik Gabrielsen");
  student1.SetId(123456);

  int student1Id = student1.GetId();
  student1Id = 12345;

  student1.Print();
  return 0;
}