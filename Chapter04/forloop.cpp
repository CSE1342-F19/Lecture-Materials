#include <iostream>
using namespace std;

int main() {
  
  /*
 * print all numbers between 1 and 100
 * declare i within forloop
 */
 for (int i = 0; i < 100; i++) {
   cout << i + 1 << endl;
 }


/*
 * print all numbers between 1 and 100
 * declare i outside forloop
 */
 unsigned int i = 0;
 for (;i < 100; i++) {
   cout << i << endl;
 }

  return 0;
}