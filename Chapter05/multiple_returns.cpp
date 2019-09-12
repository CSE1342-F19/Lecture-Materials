#include <iostream>

using namespace std;

void getPlayerScores(double &player1Score, double &player2Score) {
  player1Score = 10;
  player2Score = 15;
}

int sum(int num, int num2);

int main() {
  double player1Score = 0;
  double player2Score = 0;
  getPlayerScores(player1Score, player2Score);
  // player1Score and player2Score values now hold the values "returned" from getPlayerScore()

  cout << player1Score << "  " << player2Score << endl; 
  return 0;
}