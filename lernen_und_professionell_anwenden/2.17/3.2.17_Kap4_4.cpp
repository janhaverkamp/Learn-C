// Kapitel 4; Ausgabe von Zeichen, Strings und booleschen Werten

// Ein Zeichen einlesen und den Zeichencode  oktal, dezimal und
// hexadezimal ausgeben.

#include <iostream>                     //Deklaration für cin, cout 
#include <iomanip>                      //Für Manipulatoren von cout
#include <string>                       //Für Strings
using namespace std;

int main()
{
  int zahl =  ' ';

  cout << " Das Leerzeichen hat den Zeichencode: " 
       << zahl << endl;

  char ch;
  string prompt("Geben sie ein Zeichen und <Return> ein: ");      //Eingabeaufforderung

  cout << prompt;

  cin >> ch;
  zahl = ch;

  cout << "Das Zeichen: " << ch                                 //Zeichenausgabe
       << " hat den Zeichencode" << endl;

  cout << uppercase                                             //Tabellenausgabe
       << "----oct----dec----hex----" << endl
       << oct << setw(7) << right << zahl
       << dec << setw(7) << right << zahl
       << hex << setw(7) << right << zahl << endl;

  return 0;
}

