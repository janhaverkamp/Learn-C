//Capter 4 exam 1 exercise 2
//Jan Haverkamp 
//09.03.18 21:51

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << left << setw(15) << 0.123456 << endl;
	cout << fixed << right << setprecision(2) << setw(12) << 23.987 << endl;
	cout << scientific << setprecision(4) << setw(10) << -123.456;

	return 0;
}