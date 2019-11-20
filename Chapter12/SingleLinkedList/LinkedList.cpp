#include <iostream>
#include "LinkedList.h"

void LinkedList::print(){
    // TODO: Implement print (with counter)
    Node *curr = this->head;
    int counter = 0;
    while (curr != nullptr) {
      std::cout << counter << ": " << curr->data << std::endl;
      counter++;
      curr = curr->next;
    }
}

void LinkedList::append(int data) {
  Node *node = new Node();
  node->data = data;
  node->next = nullptr;

  if (this->head == nullptr) {
    this->head = node;
    this->tail = node;
  } else {
    this->tail->next = node;
    this->tail = node;
  }

  this->length++;
}

void LinkedList::remove() {
  if (this->head == nullptr) {
    return;
  }

  Node *temp = this->head;
  this->head = temp->next;
  delete temp;
}