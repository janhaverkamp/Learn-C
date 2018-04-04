//Kapitel 7; Symbolische Konstanten und Makros
//Makros mit Parametern
//Vom 21.2.17
//Von Jan Haverkamp
//FEHLERHAFT

#include <iostream>
#include <string>
using namespace std;

#define DELAY	10000000			//Verzögerung
//#define CLS	(cout << "\033[2J")		//Bildschirm löschen
//#define LOCATE(z,s)	(cout << "\033["<< z <<';'<< s <<'H') 	//Cursor POS

int main()
{
	int x(2),y(3),dx(1),v(0);
	string boden(79,'-'),
		   header = "\t****** SPRINGERNDER BALL *******";
	cout << header;

	//CLS;
	cout << "hjljöö";
	//LOCATE(1,25); cout << header;
	//LOCATE(25,1); cout << boden;

	while(true);						//Ball dauerhaft springen lassen
	{
		//LOCATE(y,x); cout << 'o' << endl; 	// Ball anzeigen
		for( long warten= 0; warten < DELAY; warten++)

		if(x==1 || x==79) dx = -dx;		//An einer Wand?

		if(y==24)						//Am Boden
		{
			v=-v;
			if(v==0) v=-7;				//Neu Anstoßen
		}
		v+=1;							//Beschleunigung = 1

		//LOCATE(y,x); cout << ' ';		//Anzeige löschen
		y+=v; x+=dx;		
	}
}  