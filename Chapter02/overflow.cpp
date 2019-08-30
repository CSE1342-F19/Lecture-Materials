/*
 * CSE 1342 - Overflow and Assignment
 * Jake Carlson
 * 8/22/2018
 */
#include <iostream>
using namespace std;

int main()
{
    int big = 2048;
    long bigger = big;
    short small = big;

    cout << "Integer:\t" << big << endl;
    cout << "Long:\t\t" << bigger << endl;
    cout << "Short:\t\t" << small << endl;
	cout << "--------------------------------" << endl;
	
	big = big * 2048;
	bigger = bigger * 2048;
	small = small * 2048;

	cout << "Integer:\t" << big << endl;
    cout << "Long:\t\t" << bigger << endl;
    cout << "Short:\t\t" << small << endl;
	cout << "--------------------------------" << endl;

	big = big * 2048;
	bigger = bigger * 2048;
	small = small * 2048;

	cout << "Integer:\t" << big << endl;
    cout << "Long:\t\t" << bigger << endl;
    cout << "Short:\t\t" << small << endl;
	cout << "--------------------------------" << endl;

	big = big * 2048;
	bigger = bigger * 2048;
	small = small * 2048;

	cout << "Integer:\t" << big << endl;
    cout << "Long:\t\t" << bigger << endl;
    cout << "Short:\t\t" << small << endl;
	cout << "--------------------------------" << endl;

	big = big * 2048;
	bigger = bigger * 2048;
	small = small * 2048;

	cout << "Integer:\t" << big << endl;
    cout << "Long:\t\t" << bigger << endl;
    cout << "Short:\t\t" << small << endl;
	cout << "--------------------------------" << endl;

    return 0;
}