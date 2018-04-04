//Chapter 4 exam 2 exercise 3
//Jan Haverkamp
//09.03.18 21:59

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string		name;
	int			amount;
	float		value;

	cout << "\nName of the product: ";
	getline(cin, name);
	cin.sync();
	cin.clear();

	cout << "Amount: ";
	cin >> amount;

	cout << "Value: ";
	cin >> value;

	cout << "\nProductname   Amount     $/Piece" << endl;
	cout << left << setw(14) << name << setw(11) << amount << setw(10) << value << endl;

	return 0;

}