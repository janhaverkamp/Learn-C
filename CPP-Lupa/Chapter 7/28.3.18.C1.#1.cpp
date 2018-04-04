//Capter 7 exercise 1 "Macros"
//output of a different sin-values
//Jan Haverkamp 
//28.03.18 22:07

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI		3.1415926536
#define START	0.0
#define STOP	(2.0 * PI)
#define STEP	(PI / 8)
#define HEADER	(cout << "******* Char for Sin - Values *******\n")

int main()
{
	HEADER;

	cout << setw(16) << " x " << setw(20) << "sin(x)" << setw(16) << "cos(x)\n" 
		 << "------------------------------------------" << fixed << endl;
	
	double x;
	for(x = START; x < STOP + STEP/2 ; x += STEP)
	{
		cout << setw(20) << x << setw(16) << sin(x) << setw(16) << cos(x) << endl;
	}

	return 0;
}
