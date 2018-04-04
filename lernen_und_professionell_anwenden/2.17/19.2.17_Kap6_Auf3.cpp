//Kapitel 6; Aufgabe 3: Zufallszahlen
//Vom 19.2.17 
//Von Jan Haverkamp
//Unfertig; Fehlerhaft

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned int input;

	cout << "Zufallsgenerator. Geben sie eine Zahl ein: ";
	cin >> input;
	cout << "\n";

	srand(input);								//Generator Initialisierung

	for(int i = 1; i <= 20; i++){				//Schleife für die Ausgabe
		cout << setw(5) << rand() % 100 + 1;
 	}
	return 0;

}