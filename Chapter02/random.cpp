#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  int random = rand() % 10;
  cout << "Random Number: " << random << endl;

  return 0;
}