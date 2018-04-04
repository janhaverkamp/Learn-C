//Kapitel 7 Aufgabe: Umlenken von Standarteingabe und -ausgabe

//zeilen.cpp
//Filterprogramm zur Nummerierung von Zeilen.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string zeile;
	int nummer(0);

	while(getline(cin, zeile))			//Solange eine Zeile eingelesen werden kann
	{
		cout << setw(5) << ++nummer << ": "
			 << zeile << endl;

	}
	return 0;
}