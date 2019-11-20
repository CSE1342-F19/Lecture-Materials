#include <iostream>

using namespace std;

struct Currency {
  double amount;
  char* type;
};

int main() {
  Currency *currencies = new Currency;
  // currencies[0] = Currency(); 

  Currency **currencies2 = new Currency*[10];
  currencies2[0] = new Currency();
  
  currencies2[1] = new Currency();
  currencies2[2] = new Currency();
  currencies2[3] = new Currency();
  
  return 0;
}