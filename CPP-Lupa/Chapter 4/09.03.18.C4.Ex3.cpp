//Chapter 4 exam 3 exercise 4
//Jan Haverkamp 
//09.03.18 22:10

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int input;

	cout << "Type in a character or a number: ";
	cin >> input;

	cout << "Your caracter: " << input << endl
		<< "Decimal: " << dec << input << endl
		<< "Octal: " << oct << input << endl
		<< "Hexal: " << hex << input << endl;

	return 0;

}