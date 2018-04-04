//Kapitel 4; Formatierte Eingabe

//Eine Artikelbazeichung und einen Preis einlesen

#include <iostream>             //Für cout cin
#include <iomanip>              //Für Feldmanipulatoren
#include <string>               //Für Strings
using namespace std;            //Für std::cout

int main()
{
  string bezeichung;
  double preis;

  cout << "\nGeben sie die Artikelbezeichung ein: " << endl;

  //höchstens 16 Zeichen für die Bezeichung einlesen
  cin >> setw(16) >> bezeichung;
  cin.sync();                   //Puffer leeren
  cin.clear();                  //Fehlerflags löschen

  cout << "\nGeben sie den Artikelpreis ein: ";
  cin >> preis;                 //Preis einlesen

  //Kontrollausgabe
  cout << fixed << setprecision(2)
       << "\nArtikel: "
       << "\nBezeichnung: " << bezeichung 
       << "\nPreis: " << preis << endl;

  return 0;
}
