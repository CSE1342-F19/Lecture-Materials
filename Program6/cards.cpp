#include <iostream>

using namespace std;

enum CARDVALUES { TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };
enum CARDSUITS { HEARTS, DIAMONDS, SPADES, CLUBS };

void DisplayRank(CARDVALUES rank) {
  if (rank <= TEN) {
    cout << rank;
    return;
  }
  switch (rank) {
  case JACK:
    cout << "J";
    break;
  case QUEEN:
    cout << "Q";
    break;
  case KING:
    cout << "K";
    break;
  case ACE:
    cout << "A";
    break;
  default:
    cout << "X";
  }
}

void Display(CARDVALUES rank, CARDSUITS suit) {
  /*
     *  +------------+
     *  | A          |
     *  |   ******   |
     *  |   ******   |
     *  |   ******   |
     *  |   ******   |
     *  |   ******   |
     *  |          A |
     *  +------------+
     */

  cout << "+------------+" << endl;
  cout << "| ";
  DisplayRank(rank); 
  if (rank != 10) {
    cout << " ";
  }
  cout << "         |" << endl;
  switch (suit) {
  case HEARTS:
    cout << "|   **  **   |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|    ****    |" << endl;
    cout << "|     **     |" << endl;
    break;
  case DIAMONDS:
    cout << "|     **     |" << endl;
    cout << "|    ****    |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|    ****    |" << endl;
    cout << "|     **     |" << endl;
    break;
  case SPADES:
    cout << "|  ** ** **  |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|    ****    |" << endl;
    cout << "|     **     |" << endl;
    cout << "|    ****    |" << endl;
    break;
  case CLUBS:
    cout << "|     **     |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|   ******   |" << endl;
    cout << "|     **     |" << endl;
    cout << "|   ******   |" << endl;
    break;
  default:
    cout << "BAD SUIT";
  }

  cout << "|         ";
    if(rank != 10) { cout << " "; }
    DisplayRank(rank);
    cout << " |" << endl;
    cout << "+------------+";
    cout << endl;
}

void Display(int value) {
    cout << "D" << value << endl;
    switch(value){
    case 1:
        cout << "+---------------+" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|       *       |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "+---------------+" << endl;
        break;
    case 2:
        cout << "+---------------+" << endl;
        cout << "|   *           |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|           *   |" << endl;
        cout << "+---------------+" << endl;
        break;
    case 3:
        cout << "+---------------+" << endl;
        cout << "|   *           |" << endl;
        cout << "|               |" << endl;
        cout << "|       *       |" << endl;
        cout << "|               |" << endl;
        cout << "|           *   |" << endl;
        cout << "+---------------+" << endl;
        break;
    case 4:
        cout << "+---------------+" << endl;
        cout << "|   *       *   |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|   *       *   |" << endl;
        cout << "+---------------+" << endl;
        break;
    case 5:
        cout << "+---------------+" << endl;
        cout << "|   *       *   |" << endl;
        cout << "|               |" << endl;
        cout << "|       *       |" << endl;
        cout << "|               |" << endl;
        cout << "|   *       *   |" << endl;
        cout << "+---------------+" << endl;
        break;
    case 6:
        cout << "+---------------+" << endl;
        cout << "|   *       *   |" << endl;
        cout << "|               |" << endl;
        cout << "|   *       *   |" << endl;
        cout << "|               |" << endl;
        cout << "|   *       *   |" << endl;
        cout << "+---------------+" << endl;
        break;
    }
}

int main () {
  for (int i = 0; i < 4; i++) {
    for (int j = 2; j <= 14; j++) {
      CARDVALUES rank = (CARDVALUES) j;
      CARDSUITS suit = (CARDSUITS) i;
      Display(rank, suit);
    }
  }

  for (int i = 0; i < 6; i++) {
    Display(i + 1);
  }

  return 0;
}