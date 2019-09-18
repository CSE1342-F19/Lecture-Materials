#include <iostream> 

using namespace std;

void countDown(int count) {
  // Define base case (count = 0)
  if (count == 0) {
    cout << "GO" << endl;
  } else {
    cout << count << endl;
    count -= 1;
    countDown(count);
  }
}

int main() {
  countDown(10);

  return 0;
}














// if (count == 0) {
//     cout << "Done!" << endl;
//     return;
//   } 
//   cout << count << endl;
//   countDown(count - 1);