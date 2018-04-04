// Mit Strings arbeiten.

#include <iostream>             //Deklaration von cin und cout
#include <string>               //Deklaration der Klasse string

using namespace std;

int main()
{
  //Vier Strings definieren
  string prompt("Wie lautet Ihr Name: "),
         ausgabe("Ihr Name ist: "),
         name,                  //leer
         linie( 40, '-'),       //String mit 40 '-'
         gesamt = "Hallo ";     //auch möglich!

  cout << prompt;               //Eingabe-Aufforderung
  getline ( cin, name);         //Name einlesen

  gesamt = gesamt + name;

  cout << linie << endl
       << gesamt << name << endl
       << ausgabe << name.length() << " Zeichen lang" << endl
       << linie << endl;

  return 0;
}

