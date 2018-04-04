//Chapter 4 exercise 4: formatted input 
//Jan Haverkamp
//09.03.18 20:50

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name;
	double price;

	cout << "Type in a product name: ";
	
	//at most 16 characters
	cin >> setw(16);		//or: cin.width(16);
	cin >> name;
	cin.sync();				//clean cache
	cin.clear();			//erase error flags

	cout << "Type in a price: ";
	cin.width(4);
	cin >> price;

	//controll-output
	cout << "\n\nProductname: ";
	cout.width(16);
	cout.fill(' ');
	cout << left << name << endl;

	cout << "Price:       " << setw(4) << price << '$' << endl;

	return 0;
}