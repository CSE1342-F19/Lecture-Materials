#include <iostream>

using namespace std;

class Node {
  public: 
    int data;
    Node *next;
};

// pass pointer by reference
void push(Node *&stack, int val) {
  cout << "Pushing Value: " << val << endl;
  Node *newNode = new Node();
  newNode->data = val;
  newNode->next = stack;
  stack = newNode;
}

Node* pop(Node *&stack) {
  if (stack == nullptr) {
    cout << "Stack underflow" << endl;
    return nullptr;
  } else {
    cout << "Popped Value: " << stack->data << endl;
    Node *top = stack;
    stack = stack->next;
    return top;
  }
}

void printStack(Node *stack) {
  Node *curr = stack;
  cout << "Stack" << endl;
  while(curr != nullptr) {
    cout << curr->data << endl;
    curr = curr->next;
  }
  cout << "End Stack" << endl;
}

int main() {
  Node *stack = nullptr;

  push(stack, 1);
  push(stack, 2);
  push(stack, 3);

  pop(stack);
  pop(stack);
  pop(stack);

  return 0;
}