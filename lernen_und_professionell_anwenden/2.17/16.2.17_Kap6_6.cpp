//Kapitel 6; Kontrollstrukturen
//else-if-Kette
//Vom 16.2.17
//Von Jan Haverkamp

//geschw.cpp
//Bußgeld für zu schnelles Fahren

#include <iostream>
using namespace std;

int main()
{
	float grenze, geschw, zuviel;

	cout << "\nGeschwindigkeitsgrenze eingeben!: ";
	cin >> grenze;
	cout << "\nGeschwindigkeit eingeben!: ";
	cin >> geschw;

	if( (zuviel = geschw - grenze) < 10)
		cout << "\nSie haben nochmal Glück gehabt!" << endl;
	else if( zuviel < 20)
		cout << "\nBusgeld fällig: 40.- Euro" << endl;
	else if( zuviel < 30)
		cout << "\nBusgeld fällig: 80.- Euro" << endl;
	else 
		cout << "\nFührerschein abgeben!!" << endl;
	return 0;
}