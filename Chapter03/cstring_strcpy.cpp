#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s1[20];
  char s2[20] = "Another new string";

  strcpy(s1, "");               // Contents of s1 changed to null string

  strcpy(s1, "new string");     // Contents of s1 changed to "new string"

  strcpy(s1, s2);               // Contents of s1 changed to "Another new string"
   

  return 0;
}