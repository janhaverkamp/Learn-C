//Kapitel 4; Aufgabe 4: 
//
//Erstellen sie ein C++-Programm, das einen beliebigen  Zeichencode 
//(eine positive Ganzzahl) von der Tastatur einließt und das entsprechende 
//Zeichen und den Zeichencode dezimal, octal, hexadezimal auf dem
//Bildschirm ausgibt.

#include <iostream>                             //Für cin cout
#include <iomanip>                              //Für Feldmanipulation
using namespace std;                            //Für std::cout

int main()
{
  int zahl;

  cout << "Geben sie eine Ganzahl samt vorzeichen ein!" << endl
       << "Zahl: ";
  cin >> zahl ;

  cout << "----dec----oct----hex----" << endl
       << setw(7) << dec << showpos << zahl
       << setw(7) << oct << zahl 
       << setw(7) << hex << zahl << endl;

  return 0;
}
