#include <iostream>

#define SIZE 10

using namespace std;

class Queue {
    int *array;
    int capacity;
    int front;
    int back;
    int count;

  public:
    Queue(int size = SIZE);
    void push(int val);
    int pop();
};

Queue::Queue(int size) {
  array = new int[size];
  capacity = size;
  front = 0;
  back = -1;
  count = 0;
}

void Queue::push(int val) {
  if (count >= capacity) {
    cout << "Queue Overflow" << endl;
  } else {
    cout << "Pushing Value: " << val << endl;
    back = (back + 1) % capacity;
    array[back] = val;
    count++;
  }
}

int Queue::pop() {
  if (count == 0) {
    cout << "Queue Underflow" << endl;
    return -1;
  } else {
    int poppedVal = array[front];
    front = (front + 1) % capacity;
    count--;
    cout << "Popped Value: " << poppedVal << endl;
    return poppedVal;
  }
}

int main() {
  Queue queue;
  queue.push(10);
  queue.push(20);
  queue.push(30);
  queue.push(40);

  queue.pop();
  queue.pop();
  queue.pop();
  queue.pop();
  queue.pop();

  return 0;
}