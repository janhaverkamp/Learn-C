//------------------------------------------------------------------
// ball2.cpp
//------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;
#include <conio.h>
#include "makros.h"

#define ESC 27
unsigned long delay = 5000000

int main()
{
	int		x(2),y(2),dx(1),v(0);
	bool	ende = false;
	string	boden(80, '-'),
			header		=	"**** SPRINGENDER BALL ****",
			commands	=	"[Esc = Beenden		"
							"[+] = Schneller	[-] = Langsamer";

	FARBE(WEISS,BLAU);
	CLS;
	LOCATE(25,1);	cout << header;
	LOCATE(1,24);	cout << boden;
	LOCATE(10,25);	cout << commands;

	while( !ende)
	{
		LOCATE(x,y);	cout << 'o';
		for( long warten = 0; warten < delay; ++warten)
			;
		if(x == 1 || x == 79) dx = -dx;
		if(y == 23)
		{
			v = -v;
			if( v==0) v = -7;
		}
		v += 1;

		LOCATE(x,y);	cout << ' ';
		y += v; x += dx;

		if(kbhit() != 0)
		{
			switch(getch())
			{
				case '+':	delay -= delay/5;
							break;
				case '-':	delay += delay/5;
							break;
				case ESC:	ende = true;
			}
		}
	}
	NORMAL; CLS;
	return 0;
}
