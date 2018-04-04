//Kapitel 6; While-Schleife

//schnitt.cpp
//Berechnung des Durchschnitts ganzer Zahlen

#include <iostream>
using namespace std;

int main()
{
	int x, anzahl(0);
	float summe(0.0);

	cout << "Bitte geben sie ganze Zahlen ein:\n"
			"(Abbruch mit beliebigen Buchstaben)"
		 << endl;

	while( cin >> x)
	{
		summe += x;
		++anzahl;
	}
	cout  << "Der Durchschnitt der Zahlen: "
		  << summe / anzahl << endl;
	return 0;
}