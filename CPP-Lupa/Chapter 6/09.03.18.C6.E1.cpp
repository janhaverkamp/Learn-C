//Chapter 6 exam 2 "One by One"
//Jan Haverkamp
//09.03.18 23:12

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string header (30,'-'), welcome = ("    The tiny One by One");

int main()
{
	cout << header << endl << welcome << endl << header << endl;

	for(int i(1); i <= 10; i++)
	{ 
		for(int x(1); x <= 10; x++)
		{
			cout << left << setw(3) << x * i;
		}
		cout << endl;
	}
	return 0;
}