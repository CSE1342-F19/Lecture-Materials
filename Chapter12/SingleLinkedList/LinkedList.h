#include "Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
  public: 
    int length;
    Node *head;
    Node *tail;

    void print();
    void append(int data);
    void remove();
};

#endif