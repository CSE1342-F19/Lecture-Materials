#include <iostream>
#include <exception>
#include "vector.h"

Vector::Vector() {
  this->data = new int[0];
  this->capacity = 0;
  this->size = 0;
}

Vector::Vector(int size) {
  this->data = new int[size];
  this->capacity = size;
  this->size = 0;
}

int Vector::getLength() {
  return this->size;
}

int Vector::getCapacity() {
  return this->capacity;
}

int Vector::at(int index) {
  if (index < 0 || index >= this->size) {
    throw std::invalid_argument("Error");
  }

  return data[index];
}

void Vector::push_back(int value) {
  this->data[this->size++] = value;
}
