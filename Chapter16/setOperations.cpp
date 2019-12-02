#include <iostream>
#include <set>
#include <utility>
#include <string>
using namespace std;

int main() { 
   set<string> ownedBooks;
   pair<set<string>::iterator, bool> addResult;
   int removeResult;

   ownedBooks.insert("A Tale of Two Cities");
   ownedBooks.insert("The Lord of the Rings");
   ownedBooks.insert("Le Petit Prince");
   ownedBooks.insert("The Hobbit");

   addResult = ownedBooks.insert("Le Petit Prince");
   cout << "Added \"Le Petit Prince\" again: " << addResult.second << endl;

   removeResult = ownedBooks.erase("The Hobbit");
   cout << "Removed \"The Hobbit\": " << removeResult << endl;

   return 0;
}