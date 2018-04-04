//makros.h
//Eigene Makros für C++
//18.8.17

#ifndef _MYMAKROS_
#define _MYMAKROS_

#include <iostream>
using namespace std;

//------------------------------------------------------------------
//Makro ABS
//Aufruf: ABS( wert)
//Liefert den Betrag von wert
#define ABS(a) ((a >= 0) ? (a) : (-a))

//------------------------------------------------------------------
//Makro MIN
//Aufruf: MIN( a,b)
//Liefert das Minimum von a & b
#define	MIN(a,b) ((a < b) ? (a) : (b))

//------------------------------------------------------------------
//Makro MAX
//Aufruf: MAX( a,b)
//Liefert das Maximium von a & b
#define	MAX(a,b) ((a > b) ? (a) : (b))

//------------------------------------------------------------------
//Makros zur Steuerung des Bildschirms
//------------------------------------------------------------------
//Makro CLS
//Aufruf CLS;
//Löscht den Bildschirm
#define	CLS	(cout << "\033[2J")

//------------------------------------------------------------------
//Makro LOCATE
//Aufruf: LOCATE(zeile, spalte);
//Setzt den Cursos an die Position (zeile, spalte)
//(1,1) ist die linke obere Ecke
#define	LOCATE(x,y)	(cout <<"\033["<<(y)<<';'<<(x)<<'H')

//------------------------------------------------------------------
//Makro Farbe
//Aufruf: FARBE(vordergrund, hintergrund);
//Setzt Vorder- und Hintergrundfarbe für Terminal
#define	FARBE(v,h)	(cout <<"\033[1;3"<< (v) \
						  <<";4" << (h) <<'m'<< flush)

// 1:  Vordergrund hell
// 3x: Vordergrundfarbe x
// 4x: Hintergrundfarbe x

// Farbwerte für das Makro FARBE
// Beispielwert: FARBE( WEISS,BLAU);
#define SCHWARZ	0
#define ROT		1
#define GRUEN	2
#define GELB	3
#define BLAU	4
#define MAGENTA	5
#define CYAN	6
#define WEISS	7

//------------------------------------------------------------------
// Makro INVERS
// Aufruf: INVERS;
// Die nachfolgende Ausgabe wird invers dargestellt.
#define INVERS	(cout << "\033[7m")

//------------------------------------------------------------------
// Makro NORMAL
// Aufruf: NORMAL;
// Setzt die Bildschirmattribute auf die Standartwerte.
#define NORMAL	(cout << "\033[0m")

#endif //	_MYMAKROS_
