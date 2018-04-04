//Chapter 4 exercise 5 hex dec oct input
//Jan Haverkamp
//09.03.18 21:06

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num = 0;

	cout << "Type in a number in hexadecimal: " << endl;

	cin >> hex >> num;

	cout << "Your input in decimal: " << dec << num << endl;
	cin.sync();
	cin.clear();

	double x1(0.0), x2(0.0);
	cout << "Now type in two floats: " << endl;
	cout << "Number 1: ";
	cin >> x1;
	cout << "\nNumber 2: ";
	cin >> x2;
	
	cout << fixed << setprecision(2) << "\nSum of both numbers: " << x1 + x2 << endl;
	cout << "Mean of both numbers: " << (x1 + x2) / 2 << endl;
	cout << "Product of both numbers: " << x1 * x2 << endl;
	
	return 0;
}