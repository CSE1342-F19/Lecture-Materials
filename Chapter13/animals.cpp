#include <iostream>
#include <vector>

class Animal {
  private:
    char *name;
  public:
    Animal() {};
    Animal(char* name) {
      this->name = name;
    }
    virtual void talk() = 0;
};

class Rabbit: public Animal {

};

class Dog: public Animal {
  public:
    Dog(): Animal() {}
    Dog(char* name): Animal(name) {}
    void talk() {
      std::cout << "Bark!!" << std::endl;
    }
};

class Cat: public Animal {
  public:
    Cat(): Animal() {}
    Cat(char* name): Animal(name) {}
    void talk() {
      std::cout << "Meow!!" << std::endl;
    }
};

int main() {
  Animal *dog = new Dog("Spot");
  Cat *cat = new Cat("George");
  
  std::vector<Animal*> animals;

  animals.push_back(dog);
  animals.push_back(cat);

  for (int i = 0; i < animals.size(); i++) {
    animals.at(i)->talk();
  }

  return 0;
}