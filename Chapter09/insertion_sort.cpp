#include <iostream>
using namespace std;

void InsertionSort(int numbers[], int numbersSize) {
   int i;
   int j;
   int temp;      // Temporary variable for swap
   
   for (i = 1; i < numbersSize; ++i) {
      j = i;
      // Insert numbers[i] into sorted part
      // stopping once numbers[i] in correct position
      while (j > 0 && numbers[j] < numbers[j - 1]) {
         
         // Swap numbers[j] and numbers[j - 1]
         temp = numbers[j];
         numbers[j] = numbers[j - 1];
         numbers[j - 1] = temp;
         --j;
      }
   }
}

int main() {
   int numbers[] = { 10, 2, 78, 4, 45, 32, 7, 11 };
   const int NUMBERS_SIZE = 8;
   int i;
   
   cout << "UNSORTED: ";
   for(i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << " ";
   }
   cout << endl;
   
   InsertionSort(numbers, NUMBERS_SIZE);
   
   cout << "SORTED: ";
   for(i = 0; i < NUMBERS_SIZE; ++i) {
      cout << numbers[i] << " ";
   }
   cout << endl;
   
   return 0;
}