//Kapitel 6; Kontrollstrukturen
//Verzweigung mit if-else
//Vom 16.2.17
//Von Jan Haverkamp

//if_else.cpp
//Demo zur Verwendung der if-else-Anweisung 

#include <iostream>
using namespace std;

int main()
{
	float x, y, min;

	cout << "Geben Sie zwei verschiedene Zahlen ein:\n";
	
	if(cin >> x && cin >> y)	//Falls beide Eingaben erfolgreich sind,
	{							//das Minimum ermitteln.
		if(x < y)
			min = x;
		else
			min = y;
		cout << "\nDie kleinere Zahl ist: " << min << endl;
	}
	else 
		cout << "\nFehlerhafte Eingabe!" << endl;
	return 0;
}