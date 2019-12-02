#include <iostream>

using namespace std;

template<typename T>
T findMax(T val1, T val2) {
  if (val1 > val2) { // need to overload > in class definition
    return val1;
  } else {
    return val2;
  }
}

class Dog {
  int pounds;

  public:
    Dog(int pounds) {
      this->pounds = pounds;
    }
    void print() {
      cout << "Dog - " << this->pounds << " lbs" << endl;
    }
    friend bool operator> (const Dog& lhs, const Dog& rhs){ 
      return lhs.pounds > rhs.pounds;
    }
};

int main() {
  // find max int
  cout  << findMax(100, 200) << endl;

  // find max dog
  Dog dog1 = Dog(10);
  Dog dog2 = Dog(20);

  Dog maxDog = findMax(dog1, dog2);
  maxDog.print();
  
  return 0; 
}