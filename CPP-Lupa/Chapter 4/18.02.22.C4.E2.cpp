//Chapter 4 exercise 2
//Jan Haveramp
//22.02.18 16:43

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float inp;

	cout << "Enter a number";
	cin >> inp;

	cout << showpoint << inp << endl;
	cout.setf(ios::fixed);
	cout << inp << endl;
	cout << scientific << inp << endl;
	cout.precision(10);
	cout << noshowpoint << inp << endl;

	return 0; 
}