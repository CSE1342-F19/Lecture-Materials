#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // point 1
  double totalDist;
  double x1 = 2;
  double y1 = 5.00;
  // point 2
  double x2 = 10.0;
  double y2 = 10.0;
  
  // Implement solutiion
  double xDist = pow(x2 - x1, 2);
  double yDist = pow(y2 - y1, 2);
  totalDist = sqrt(xDist + yDist);

  cout << "Distance between points: " << totalDist << endl;

  return 0;
}
