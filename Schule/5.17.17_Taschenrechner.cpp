//Taschenrechner Programm
//17.5.17
//Jan Haverkamp

#include "makros.h"
#include "conio.h"

#define MENU (cout << " Addieren(+), Subtrahieren(-)" << endl \
				   << " Multiplizieren(*), Dividieren(:)" << endl \
				   << " Potenzieren(p), Radizieren(w) " << endl)


int main()
{
	int end(0);

	while(end!=1)									//Hauptschleife
	{

		float zahl1, zahl2, result;                // Variablen für Zahlen
		char menu, trash;									//Variable für Rechenzeichen
		CLS;										//Bildschirm löschen
		LOCATE(1,1);	
		MENU;										//Menu anzeigen	                           		

		cout << "\n Geben Sie eine Rechenaufgabe ein: "; // Eingabeaufforderung ausgeben
		fflush(stdin);
		cin >> zahl1 >> menu >> zahl2;

	 	


		switch(menu)								//Fall wählen
		{                       	 	
			case '+': result = add(zahl1,zahl2); break; 
			case '-': result = sub(zahl1,zahl2); break; 
			case '*': result = mul(zahl1,zahl2); break; 
			case ':': result = div(zahl1,zahl2); break; 
			case 'p': result = pwr(zahl1,zahl2); break;
			case 'w': result = sqr(zahl1); break;

			default: cout << "Falsche Eingabe\n";
		}
		
		cout << zahl1 << ' ' << menu ;
		if (menu != 'w') cout << ' ' << zahl2;		//Bei Wurzel nicht ausgeben
		cout << " = " << result << '\n'
			 << "Enter zum fortfahren";

		cin.ignore().get();	
	}
}