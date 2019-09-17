#include <iostream>

using std::cout;
using std::endl;

int local{0};

void update() {
  static int local{40};
  cout << ::local++ << endl;
}

int main() {
  local;
  update();
  update();
  update();
  update();
  update();
  update();
}