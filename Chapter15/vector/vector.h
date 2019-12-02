// DEFINE VECTOR TEMPLATED CLASS
#include <exception>

template<typename T>
class Vector {
  int size;
  int capacity;
  T* data;
  
  public: 
  Vector();
  Vector(int);

  int getLength();
  void push_back(T item);

  T at(int);
};

template<typename T>
Vector<T>::Vector() {
  this->size = 0;
  this->capacity = 0;
  this->data = new T[0];
}

template<typename T>
Vector<T>::Vector(int capacity) {
  this->size = 0;
  this->capacity = capacity;
  this->data = new T[capacity];
}

template<typename T>
int Vector<T>::getLength() {
  return this->size;
}

template<typename T>
void Vector<T>::push_back(T item) {
  if (this->size >= this->capacity) {
    throw std::runtime_error("Exceeded Capacity");
  }
  this->data[this->size++] = item;
}

template<typename T>
T Vector<T>::at(int index) {
  if (index < 0 || index > this->size - 1) {
    throw std::runtime_error("Tried to access element outside of bounds");
  }

  return this->data[index];
}

