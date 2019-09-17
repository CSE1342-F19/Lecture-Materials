#include <iostream>
#include "threeints.h"
#include <cassert>

using namespace std;

// Normally lots of other code here

int main() {

   assert(ThreeIntsSum(5, 10, 20) == 35);
   assert(ThreeIntsSum(5, -10, 20) == 15);

   return 0;
}

// Normally lots of other code here