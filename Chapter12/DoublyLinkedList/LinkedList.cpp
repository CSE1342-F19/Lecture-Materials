#include <iostream>
#include "LinkedList.h"

void LinkedList::print()
{
  Node *temp = this->head;

  while (temp)
  {
    std::cout << temp->data << " ";
    temp = temp->next;
  }
  std::cout << std::endl;
}

void LinkedList::prepend(int data)
{
  Node *newNode = new Node();
  newNode->data = data;

  if (this->head == nullptr)
  { // list empty
    newNode->next = nullptr;
    newNode->prev = nullptr;
    this->head = newNode;
    this->tail = newNode;
  }
  else
  {
    newNode->next = this->head;
    newNode->prev = nullptr;
    this->head->prev = newNode;
    this->head = newNode;
  }
}

void LinkedList::append(int data)
{
  Node *newNode = new Node();
  newNode->data = data;

  if (this->head == nullptr)
  { // list empty
    newNode->next = nullptr;
    newNode->prev = nullptr;
    this->head = newNode;
    this->tail = newNode;
  }
  else
  {
    this->tail->next = newNode;
    newNode->prev = this->tail;
    newNode->next = nullptr;
    this->tail = newNode;
  }
}

void LinkedList::printReverse()
{
  Node *curr = this->tail;

  while (curr != nullptr)
  {
    std::cout << curr->data << " ";
    curr = curr->prev;
  }
  std::cout << std::endl;
}

Node* LinkedList::search(int data) {
  // implement search
  Node *curr = this->head;
  while(curr != nullptr) {
    if (curr->data == data) {
      return curr;
    } else {
      curr = curr->next;
    }
  }

  return nullptr;

}