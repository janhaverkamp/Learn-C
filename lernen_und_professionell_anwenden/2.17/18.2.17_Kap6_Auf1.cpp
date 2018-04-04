//Kapitel 6; for-Schleifen in while- umschreiben.
//Vom 18.2.17
//Von Jan Haverkamp 

//EuroDoll.cpp
//Eingabe einer Kurstabelle in Euro-USDollar

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long euro, maxEuro;
	double kurs;

	cout << "* * * KURSTABELLE Euro - US-$ * * *\n\n";
	cout << "Bitte den Preis von einem Euro in US-$ eingeben: ";
	cin >> kurs;
	cout << "Bitte die Obergrenze für Euro eingeben: ";
	cin >> maxEuro;

	//Ausgabe der Tabelle

		//Spaltenüberschriften 

	cout << '\n'
		 << setw(12) << "Euro" << setw(20) << "US-$" << "\t\tKurs: " 
		 << kurs << endl;

		 //Ausgebeformat für $

	cout << fixed << setprecision(2) << endl;

	long lower(1), upper, step(1); 		//Unter-/Obergrenze, Schritt

	while(lower <= maxEuro)
	{
		euro = lower;
		upper = step*10;

		while(euro <= upper && euro <=maxEuro)
		{
			cout << setw(12) << euro
				 << setw(20) << euro*kurs << endl;
			euro+=step;
		}
		step*=10;
		lower = 2*step;
	}
	return 0;



}