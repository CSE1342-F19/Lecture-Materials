#include <iostream>

const int STACK_SIZE = 10;

using namespace std;

class Stack {
  public:
    int stack[STACK_SIZE];
    int top = -1;

    void push(int val);
    int pop();
};

void Stack::push(int val) {
  if (top == STACK_SIZE - 1) {
    cout << "Stack Overflow" << endl;
    return;
  }
  cout << "Pushing Value: " << val << endl;
  stack[++top] = val;
}

int Stack::pop() {
  if (top == -1) {
    cout << "Stack Underflow" << endl;
    return 0;
  }
  cout << "Popped Value: " << stack[top - 1] << endl;
  return stack[top--];
}

int main() {
  
  Stack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);


  stack.pop();

  return 0;
}