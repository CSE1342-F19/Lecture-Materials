#include <iostream>

using namespace std;

void print2DArray(int array[][4], int row, int col);
double findRowAverage(int array[4], int row);

int main() {
  const int NUM_ROWS = 3;
  const int NUM_COLS = 4;
  int x[NUM_ROWS][NUM_COLS] = {
    {0,1,2,3},
    {5,6,7,8},
    {9,10,11,12}
  };

  cout << x[1][2] << endl;
  cout << x[0][3] << endl;
  cout << x[1][5] << endl;
  
  // print2DArray(x, NUM_ROWS, NUM_COLS);

  // for (int i = 0; i < NUM_ROWS; i++) {
  //   cout << findRowAverage(x[i], NUM_COLS) << endl;
  // }

  return 0;
}

double findRowAverage(int array[], int size) {
  double avg = 0;
  for(int i = 0; i < size; i++) {
    avg += (double)array[i];
  }
  return avg / size;
}


void print2DArray(int array[][4], int row, int col) {
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}
