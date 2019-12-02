#ifndef VECTOR_H
#define VECTOR_H

#include <exception>

class Vector {
  int *data;
  int capacity;
  int size;

public: 
  Vector();
  Vector(int capacity);

  int getLength();
  int getCapacity();

  void push_back(int);
  /**
   * throws runtime_error
   */
  int at(int index);
};
#endif