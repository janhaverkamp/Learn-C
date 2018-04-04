//Chapter 4 exercise 3
//output in fields
//Jan Haverkamp
//22.02.18 16:52

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int wd;
	char ic, al;
	
	cout << "Enter field width: ";
	cin >> wd;
	
	cout << endl << "Enter a blank character: ";
	cin >> ic;

	cout << endl << "Set type of line alignment: (l)eft (r)ight (i)nternal: ";
	cin >> al;

	cout.width(wd);
	cout.fill(ic);

	
	cout << "\t" << left << 012 << right << 89 << internal << -23 << endl;

	return 0;
}