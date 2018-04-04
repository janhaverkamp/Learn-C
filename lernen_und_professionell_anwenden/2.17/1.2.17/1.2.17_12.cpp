//Kapitel 2; Aufgabe 4: Gleitpunktzahlen

#include <iostream>
using namespace std;

void summe(), differenz();              //Funktionen der Rechnung

float x(123.456), y(76.543);            //Variablen der Rechnung

int main()                              //Hauptprogramm 
{
  summe();
  differenz();
  return 0;
}

void summe()                            //Summernrechner
{
  float sm;
  sm = x + y;
  cout << "Summe von x und y ist:" << sm << endl;
}

void differenz()                        //Berechnung der Differenz
{
  float d;
  d = x - y;
  cout << "Die Differenz von x und y ist:" << d;
}


