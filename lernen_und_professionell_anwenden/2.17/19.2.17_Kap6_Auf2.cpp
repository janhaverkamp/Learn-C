//Kapitel 6; Aufgabe 2: Das kleine Einmaleins
//Vom 19.2.17
//Von Jan Haverkamp

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	cout << endl << "\t\t**DAS KLEINE EINMALEINS**\t\t"
		 << endl << "     |";

	for(int i = 1; i <= 10; i++) 		//Oberste Zeile 1-10
		cout << setw(5) << i;

	string line(60,'-');				//Teillinie
	cout << "   |" << endl << line << endl;	//Striche und Zeilenumbruch

	for(int i = 1; i <=10; i++) 		//Äußere Schleife
	{
		cout << setw(3) << i << "  |";	//Formatierung
		for(int j = 1; j <= 10; j++)	//Innere Schleife
			cout << setw(5) << i*j;

		cout << "   |" << endl;
	}

	cout << line;





	return 0;
}