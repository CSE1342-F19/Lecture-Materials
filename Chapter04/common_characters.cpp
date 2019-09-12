#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char var1[] = "SMU";
  char var2[] = "CSES";
  int numCommon = 0;

  // implement here
  for (int i = 0; i < strlen(var1); i++) {
    for (int j = 0; j < strlen(var2); j++) {
      if (var1[i] == var2[j]) {
        numCommon++;
      }
    }
  }


  cout << "Total # common characters: " << numCommon << endl;

  return 0;
}