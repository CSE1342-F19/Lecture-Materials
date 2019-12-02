#include <iostream>
#include <map>
#include <string>

using namespace std;

int main () {
   map<string, int> statePopulation;

   // 2013 population data from census.gov
   statePopulation.emplace("CA", 38332521);
   statePopulation.emplace("AZ", 6626624);
   statePopulation.emplace("MA", 6692824);

   cout << "Population of Arizona in 2013 is "
        << statePopulation.at("AZ")
        << "." << endl;

   // 2014 estimated population
   statePopulation.at("AZ") = 6871809;

   cout << "Population of Arizona in 2014 is "
        << statePopulation.at("AZ")
        << "." << endl;

   return 0;
}