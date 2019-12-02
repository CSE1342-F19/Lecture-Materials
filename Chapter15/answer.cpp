template<typename T>
class Vector {
  T* data;
  int size;
  int capacity;

public: 
  Vector();
  Vector(int capacity);

  int getLength();
  int getCapacity();

  void push_back(const T&);
  T at(int index);

  void resize(int newCapacity);
};

template<typename T>
Vector<T>::Vector() {
  this->data = new T[0];
  this->size = 0;
  this->capacity = 0;
}

template<typename T>
Vector<T>::Vector(int capacity) {
  this->data = new T[capacity];
  this->size = 0;
  this->capacity = capacity;
}

template<typename T>
int Vector<T>::getLength() {
  return this->size;
}

template<typename T>
int Vector<T>::getCapacity() {
  return this->getCapacity;
}

template<typename T>
void Vector<T>::push_back(const T& newItem) {
  this->data[this->size++] = newItem;
}

template<typename T>
T Vector<T>::at(int index) {
  return this->data[index];
}

#endif