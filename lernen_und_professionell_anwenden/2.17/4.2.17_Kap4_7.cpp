//Kapitel 4; Unformatierte Ein/Ausgabe
//Text mit dem Operator >> und mit der Funktion getline() einlesen.

#include <iostream>
#include <string>
using namespace std;

string header = 
("----Beispielprogramm für unformatierte Eingabe----");

int main()
{
  string wort, rest;

  cout << header
       << "\n\nWeiter mit <Return>" << endl;
  cin.get();                                    //Newline einlesen aber nicht speichern

  cout << "\nBitte Text mit mehreren Worten eingeben!"
       << "\nMit <!> und <Return> abschließen."
       << endl;

  cin >> wort;                                  //Ein Wort einlesen 
  getline(cin, rest, '!');                      //und Rest der Eingabe bis zum Zeichen !

  cout << "\nDas erste Wort: " << wort
       << "\nRest der Eingabe: " << rest << endl;

  return 0;
}

  

