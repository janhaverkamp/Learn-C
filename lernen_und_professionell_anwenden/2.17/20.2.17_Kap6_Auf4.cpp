//Kapitel 6; Aufgabe 4: Zufallszahlen Spielautomat
//Vom 20.2.17
//Von Jan Haverkamp

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int czahl, input;
	long sek;

	cout << "Willkommen beim Glücksraten!\n"
		 << "Versuchen Sie eine zufaellige Zahl zwischen 1-15 zu erraten.\n"
		 << "Sie haben 3 Versuche!\n Viel Glück :)\n";

	time(&sek);				//Zeit abrufen 
	srand((unsigned)sek);	//Zufall initialisieren
	czahl = rand() % 15 + 1;

	for(int i = 0; i <= 2; i++)
	{
		cout << "\nIhr Tipp: ";
		cin >> input;

		if(input == czahl)
			cout << "\nGlückwunsch sie haben gewonnen!";

		else if(input != czahl)
			if(i == 2)
				cout << endl << "Tut uns leid, die Zahl ist: " << czahl;
			else if(input < czahl)
				cout << "\nIhre Zahl ist kleiner";
			else if(input > czahl)
				cout << "\nIhre Zahl ist grösser";

		
	}
	return 0;


}