//Kapitel 6; Die for-Schleife 2

//EuroDoll.cpp
//Ausgabe einer Kurstabelle: Euro und US-Dollar

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long euro, maxEuro;					//Euro-Beträge
	double kurs;						//Euro/$-Kurs

	cout << "\n* * * KURSTABELLE Euro  - US-$ * * *\n\n";
	cout << "\nBitte den Preis von einem Euro in US-$"
			" eingeben: ";

	cin >> kurs; 
	cout << "\nBitte die Obergrenze für Euro eingeben: ";
	cin >> maxEuro;

	// --- Ausgabe der Tabelle ---
	//Spaltenüberschriften

	cout << 'n'
		 << setw(12) << "Euro" << setw(20) << "US-$"
		 << "\t\tKurs: " << kurs << endl;

	//Ausgabeformat für $:
	cout << fixed << setprecision(2) << endl;

	long lower, upper, step;					//Unter-/Obergrenze, Schrittweite

	//Die aüßere Schleife bestimmt die aktuelle Untergrenze und die Schrittweite
	for( lower = 1, step = 1; lower <= maxEuro; step *=10, lower = 2*step)
	{
		//Die innere Schleife gibt einen "Block" aus:
		for( euro = lower, upper = step*10; euro <= upper && euro <= maxEuro; euro+=step)
			cout << setw(12) << euro 
				 << setw(20) << euro*kurs << endl;

	}
}