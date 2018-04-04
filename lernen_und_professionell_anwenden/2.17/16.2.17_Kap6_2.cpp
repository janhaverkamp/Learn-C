//Kapitel 6; Die for-Schleife 
//Euro1.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double kurs(0.95);					//Preis eines Euros in Dollar

	cout << fixed << setprecision(2)
		 << "\tEuro \tDollar\n";

	for( int euro(1); euro <= 5; ++euro)
		cout << "\t " << euro 
			 << "\t " << euro*kurs << endl;

	return 0;
}

