#include <iostream>

using namespace std;

template<typename T>
class Storage {
  T data;

  public:
    void setData(T data);
    T getData();
};

template<typename T>
void Storage<T>::setData(T data) {
  this->data = data;
}

template<typename T>
T Storage<T>::getData() {
  return this->data;
}

int main() {
  Storage<int> intStore;
  intStore.setData(1);

  cout << intStore.getData() << endl;
  return 0; 
}