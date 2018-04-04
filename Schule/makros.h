//Eignene Makros für C++
//17.5.17
//Jan Haverkamp

#ifndef _MAKROS_
#define _MAKROS_

#include <iostream>
#include <cmath>
using namespace std;


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

//Funktionen
float abs(float a){
	return (a >= 0) ? (a) : (-a);}

float add(float a,float b){
	return a + b;}

float sub(float a,float b){
	return a - b;}

float mul(float a,float b){
	return a * b;}

float div(float a,float b){
	if(b == 0) return 0;
	return a / b;}

float pwr(float a,double b){
	float erg = 1;
	for(int i(0); i < b; i++)
		erg =erg * a;
	return erg;}

float sqr(float a){
	float x, aq(0.1);
	x = (a + 1) / 2;
	do{
		x = (x+a/x) /2;
	}while(((x*x)-a) > aq);

	return x;}

float kw(float a){return 1/a;}


#endif // _MAKROS_