//Kapitel 4; Formatierte Eingabe von Zahlen 

//Hex-Zahl und Gleitpunktzahlen einlesen

#include <iostream>                     //Für cin cout
#include <iomanip>                      //Für Feldmanipulatoren
using namespace std;

int main()
{
  int zahl(0);

  cout << "Geben sie eine Zahl hexadezimal ein: " << endl;
  cin >> hex >> zahl;                   //Zahl als hex einlesen
  
  cout << "Ihre Zahl dezimal: " << dec << zahl << endl;
  //Bei fehlerhaften Eingabe 
  cin.clear();                          //Falsche Flags löschen
  cin.sync();                           //Eingabepuffer löschen


  double x1(0.0), x2(0.0);

  cout << "Geben sie nun zwei Gleitpunktzahlen ein: " << endl;
  cout << "Zahl1: ";                    //Eingabe der ersten Zahl
  cin >> x1 ;
  
  cout << "Zahl2: ";                    //Eingabe der zweiten
  cin >> x2;

  cout << endl
       << "Die Summe beider Zahlen ist: " 
       << setprecision(2) << fixed << setw(10)
       << x1 + x2 << endl;

  cout << "Das Produkt beider Zahlen ist: "
       << setw(10)
       << x1 * x2 << endl;

  return 0;
}


