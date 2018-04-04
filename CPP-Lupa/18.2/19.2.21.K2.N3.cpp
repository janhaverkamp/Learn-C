//Chapter 2 const & volatile
//Jan Haverkamp
//21.02.18
//Circumcise and area of a circle with a radius of 1.5

#include <iostream>
using namespace std;

const double pi = 3.141593;

int main()
{
	double area, circ, rad = 1.5;

	area = pi * rad * rad;
	circ = pi * 2 * rad;

	cout << "\n Circlecalculator\n" << endl;

	cout << "Radius:	" << rad << endl;
	cout << "Circumcise:	" << circ << endl;
	cout << "Area:		" << area << endl;

	return 0;
}