//Eigene Makro Direktive 
//Kapitel 7 Aufgabe 1

#ifndef _MYMAKROS_
#define _MYMAKROS_

#include <iostream>

using namespace std;

// Absoluter Wert
#define	ABS(a)		((a>=0) ? (a):(-a))
//Größere Zahl
#define MAX(a,b)	((a>=b) ? (a):(b))
//Kleinere Zahl
#define MIN(a,b)	((a<=b)	? (a):(b))	
//Bildschirm reinigen
#define CLS			(cout << "\033[2J")
//Cursor Position
#define LOCATE(x,y)	(cout << "\033[" << (y) << ';' << (x) << 'H')
//Farbmakro(Vordergrund,Hintergrund)
#define COLOR(v,h)	(cout << "\033[1;3" << (v) \
						  <<";4" << (h) << 'm' << flush)
//Farbcodes
#define SCHWARZ 0
#define ROT		1
#define GRUEN	2
#define GELB	3
#define BLAU	4
#define MAGENTA 5
#define CYAN	6
#define WEISS	7

//Invertierung der Farbe
#define INVERT (cout << "\033[7m")
//Zurücksetzten der Einstellungen 
#define NORMAL (cout << "\033[0")

#endif // _MYMAKROS_