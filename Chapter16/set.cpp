#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  set<string> ownedBooks;

  ownedBooks.insert("A Tale of Two Cities");
  ownedBooks.insert("The Lord of the Rings");

  cout << "Contains \"A Tale of Two Cities\": "
      << ownedBooks.count("A Tale of Two Cities") << endl;

  ownedBooks.erase("The Lord of the Rings");

  cout << "Contains \"The Lord of the Rings\": "
      << ownedBooks.count("The Lord of the Rings") << endl;

  return 0;
}