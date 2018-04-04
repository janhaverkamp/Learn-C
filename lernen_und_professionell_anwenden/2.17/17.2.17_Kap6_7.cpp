//Kapitel 6; Bedingte Bewertung 
//Vom: 17.2.17
//Von: Jan Haverkamp

//groesser.cpp

#include <iostream>
using namespace std;

int main()
{
	float x,y;

	cout << "Geben Sie zwei verschiedene Zahlen ein:\n";
	if(!(cin >> x && cin >> y))			//Falls die Eingabe nicht erfolgreich
		cout << "Fehlerhafte Eingabe!" << endl;
	else 
		cout << "Die größere Zahl ist: " 
			 << (x > y ? x : y) << endl;
	return 0;
}