//Kapitel 6; Auswahl mit switch
//Vom 17.2.17
//Von Jan Haverkamp

//Ein in einem Menü eingegebenes Kommando abfragen

#include <iostream>
using namespace std;

int menu()
{
	int input;
	cout << "Wählen sie zwischen <O>R <N>OR <X>OR <E>xit: ";
	return cin.get();
}

int main()
{
	int kommando = menu();

	switch(kommando)
	{
		case'O':
				cout << "\nSie haben OR gewählt!";
				break;
		case'N':
				cout << "\nSie haben NOR gewählt!";
				break;
		case'X':
				cout << "\nSie haben XOR gewählt!";
				break;
		case'E':
				cout << "\nProgramm wird beendet!";
				return 0;
				break;
		default:
				cout << "\nIhre Eingabe war falsch!";
				break;
	}
	return 0;
}