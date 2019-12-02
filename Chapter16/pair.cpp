#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
   pair<string, int> caPair;
   
   // 2013 population data from census.gov
   caPair = make_pair("California", 38332521);
   
   cout << "Population of " << caPair.first << " in 2013 was "
        << caPair.second << "." << endl ;
   
   // 2010 population data from census.gov
   caPair.second = 37253965;
   
   cout << "Population of " << caPair.first << " in 2010 was "
        << caPair.second << "." << endl ;
   
   return 0;
}