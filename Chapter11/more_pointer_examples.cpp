#include <iostream>

using namespace std;

int main() {
  int i = 20;
  int *iptr = &i;
  cout << i << endl;                 //20
  cout << &i << endl;              //0x0022FF24
  cout << iptr << endl;            //0x0022FF24
  cout << &iptr << endl;          //0x0022FF20
  cout << *iptr << endl;          //20

  
  int iarr[5] = {10,20,30,40,50};
  iptr = iarr;
  cout << iarr << endl;            //0x0022FF0C
  cout << iptr << endl;            //0x0022FF0C
  cout << iarr[0] << endl;        //10
  cout << *iptr << endl;          //10
  cout << *iarr << endl;          //10
  cout << iptr[0] << endl;        //10
  cout << iarr[2] << endl;        //30
  iptr += 2;
  cout << iptr << endl;            //0x0022FF14
  cout << *iptr << endl;          //30
  cout << *(iptr-1) << endl;     //20

  
  char *cptr, *csptr = "abcde";
  char carr[6] = "abcde";
  cptr = carr;
  cout << carr << endl;           //abcde
  cout << cptr << endl;            //abcde
  cout << carr[0] << endl;       //a
  cout << *cptr << endl;          //a
  cout << *carr << endl;         //a
  cout << cptr[0] << endl;       //a
  cout << carr[2] << endl;       //c
  cptr += 2;
  cout << cptr << endl;            //cde
  cout << *cptr << endl;          //c
  cout << *(cptr - 1) << endl; //b

  
  char sarr[3][10] = {"Fred", "Susan", "Mary"};
  cout << sarr << endl;             //0x0022FEE8
  cout << *sarr << endl;           //Fred
  cout << *(sarr + 1) << endl;  //Susan
  cout << sarr[2] << endl;        //Mary
  cout << sarr[0][1] << endl;    //r

  
  char *parr[3] = {"Fred", "Susan", "Mary"};
  cout << parr << endl;           //0x0022FEDC
  cout << *parr << endl;          //Fred
  cout << *(parr + 1) << endl;  //Susan
  cout << parr[2] << endl;        //Mary
  cout << parr[0][1] << endl;   //r

  return 0;
}