//Kapitel 3; Aufgabe 2: Ein Programm mit Fehlern!!

#include <iostream>                                             //Für cin u. cout
#include <string>                                               //Für Strings
#include <cstdlib>                                              //Für rand() u. srand()

using namespace std;

int main()
{
  string meldung("\nAus Fehlern wird man klug!");               //String Deklarierung
  cout << meldung << endl;                                      //String Ausgabe
  
  int len = meldung.length();                                   //String Länge bestimmen
  cout << "Die Länge des Strings ist: :" << len  << endl;

  //Und noch eine Zufallszahl
  int a,b;
  srand(12.5);
  b = rand();
  cout << "\nZufallszahl: " << b << endl;

  return 0;
}



