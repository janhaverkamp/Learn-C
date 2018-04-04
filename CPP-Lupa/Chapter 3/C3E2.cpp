//Capter 3 Exercise 2
//square roots
//Jan Haverkamp
//21.02.18 18:41

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i(4);
	float x(12.25), y(0.012), z;
	
	cout << "type in a number: ";
	cin >> z;

	cout << "\n\tnumber \t\troot" << endl;
	cout << "\t" << i << "\t\t" << sqrt(i) << endl;
	cout << "\t" << x << "\t\t" << sqrt(x) << endl;
	cout << "\t" << y << "\t\t" << sqrt(y) << endl;
	cout << "\t" << z << "\t\t" << sqrt(z) << endl;

	return 0;
}