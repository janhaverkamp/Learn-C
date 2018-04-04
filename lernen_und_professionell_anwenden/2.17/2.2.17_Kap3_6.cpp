//Kapitel 3; Aufgabe 3: "Schon wieder was dazugelernt!"

#include <iostream>                                     //Für cout cin
#include <string>                                       //Für Strings

using namespace std;

int main()
{
  string gelernt("Schon wieder was dazugelernt!"),      //Strings
         head(30,'-'),
         s1, s2,
         gesamt;

  cout << head << endl                                  //String Ausgabe
       << "Der String:\"" << gelernt << "\" ist: " << gelernt.length() << " lang!" << endl;

  cout << head << endl                                  //String Einlese und Verknüpfung
       << "Geben sie ihre beiden String hintereinander ein!" << endl;
  cout << "String 1: ";
  getline(cin, s1);
  
  cout << "String 2: ";
  getline(cin, s2);

  gesamt = s1 + ' ' +  s2;

  cout << "\nIhre Strings:" << endl 
       << gesamt << endl << head;

  return 0;
}
