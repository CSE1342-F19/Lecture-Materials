#include <iostream>
#include "LinkedList.h"

void LinkedList::print(){
    Node* temp = this->head;
    int i = 1;
    while(temp){
        std::cout << i << ": " << temp->data << std::endl;
        temp = temp->next;
        i++;
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