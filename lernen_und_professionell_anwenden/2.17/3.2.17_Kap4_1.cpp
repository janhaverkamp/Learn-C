//Kapitel 4; Formatierte Ausgabe von Ganzzahlen
//
//Ganze Zahl dezimal einlesen und oktal, dezimal
//und hexadezimal ausgeben.

#include <iostream>

using namespace std;

int main()
{
  int zahl;

  cout << "Eine ganze Zahl eigeben: ";
  cin >> zahl;
  
  cout << uppercase                     //Für Hex-Ziffern
       << "oktal---dezimal---hexadezimal" << endl
       << oct << zahl << "    \t" 
       << dec << zahl << "    \t  "
       << hex << zahl << endl;

  return 0;
}
