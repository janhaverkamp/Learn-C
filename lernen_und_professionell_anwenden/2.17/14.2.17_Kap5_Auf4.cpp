//Kapitel 5; Aufgabe 4: Bewertung der Operanden in logischen  Ausdrücken.

#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;			//Boolsche Werte als 'true' oder 'false' ausgeben

	bool erg = false;

	int y(5);
	erg = 7 || (y = 0);

	cout << "Wert von (7 || (y = 0)): " << erg
		 << endl
		 << "Wert von y: " << y << endl;

	int a,b,c;

	a = b = c = 0;
	erg = ++a || ++b && ++c;

	cout << '\n'
	     << " erg = " << erg 
	     << "   a = " << a
	     << "   b = " << b
	     << "   c = " << c << endl;

	a = b = c = 0;
	erg = ++a && ++b || ++c;

	cout << " erg = " << erg
		 << "   a = " << a
		 << "   b = " << b
		 << "   c = " << c << endl;

	return 0;
}