//Kapitel 7: Symbolische Konstanten und Makros
//Ausgabe einer Tabelle für die Sinus-Funktion
//Von Jan Haverkamp
//Vom 21.2.17

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI		3.1415926536
#define START	0.0					//Untergrenze
#define ENDE 	(2.0 * PI)			//Obergrenze
#define SCHRITT	(PI / 8.0)			//Schrittweite
#define HEADER	(cout << \
 				"\t***** Tabelle der Sinus-Funktion *****\n\n")

int main ()
{
	HEADER;							//Überschrift
									//Tabellenkopf:
	cout << setw(16) << "x" << setw(20) << "sin(x)\n"
		 << "--------------------------------------------"
		 << fixed << endl;

	double x;
	for(x = START; x < ENDE + SCHRITT/2; x += SCHRITT)
		cout << setw(20) << x << setw(16) << sin(x) << endl;

	cout << endl << endl;
	return 0;
}
