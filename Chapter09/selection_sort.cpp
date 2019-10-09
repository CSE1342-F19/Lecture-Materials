#include <iostream>
using namespace std;

void SelectionSort(int numbers[], int numbersSize) {
   int i;
   int j;
   int indexSmallest;
   int temp;      // Temporary variable for swap
   
   for (i = 0; i < numbersSize - 1; ++i) {
      
      // Find index of smallest remaining element
      indexSmallest = i;
      for (j = i + 1; j < numbersSize; ++j) {
         
         if ( numbers[j] < numbers[indexSmallest] ) {
            indexSmallest = j;
         }
      }
      
      // Swap numbers[i] and numbers[indexSmallest]
      temp = numbers[i];
      numbers[i] = numbers[indexSmallest];
      numbers[indexSmallest] = temp;
   }
}

int main() {
   int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
   const int NUMBERS_SIZE = 8;
   int i;
   
   cout << "UNSORTED: ";
   for (i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << ' ';
   }
   cout << endl;
   
   SelectionSort(numbers, NUMBERS_SIZE);
   
   cout << "SORTED: ";
   for (i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << ' ';
   }
   cout << endl;
   
   return 0;
}