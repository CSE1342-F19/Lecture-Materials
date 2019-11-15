#include <iostream>
#include <string>

using namespace std;

class Base {
  private: 
    int privateData;
  protected: 
    int protectedData;
  public: 
    int publicData;
};

class PublicInheritance: public Base {
  public: 
    PublicInheritance() {
      protectedData = 100;
      publicData = 100;
    }
};

class ProtectedInheritance: protected Base {
  public: 
    ProtectedInheritance() {
      publicData = 100;
      protectedData = 100;
    }
};

class PrivateInheritance: private Base {
  public: 
    PrivateInheritance() {
      publicData = 100;
      protectedData = 100;
    }
};

int main() {
  PublicInheritance c1;
  ProtectedInheritance c2;
  PrivateInheritance c3;

  c1.publicData;
  // c2.publicData;
  // c2.data;
  // c3.data;

  return 0;
}