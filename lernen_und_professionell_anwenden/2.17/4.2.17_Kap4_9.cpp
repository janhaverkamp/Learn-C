//Kapitel 4; Aufgabe 3: Artikelnummer Stückzahl Preis Einlesung

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  string line("------------------------------------------"),       //Linienheader 
         head( "| Artikelnummer | Stückzahl | Stückpreis |");      //Ausgabeheader

  unsigned int an, sz;                                                  //Var für Nummern
  double sp;

  cout << "\t Wareneingabe Programm" << endl
       << line << endl
       << "Eingaben werden mit <Return> bestätigt!" << endl << endl 
       << "Geben sie die Artikelnummer ein: ";
  cin >> an;                                    //Eingabe der Artikelnummer
  cin.sync();                                   //Puffer Löschen
  cin.clear();                                  //Flagfehler löschen

  cout << "\nNun die Stückzahl: ";              //Eingabe der Stückzahl
  cin >> sz;
  cin.sync();
  cin.clear();

  cout << "\nUnd den Preis: ";                  //Eingabe des Preises
  cin >> sp;
  cin.sync();
  cin.clear();

  cout << endl <<  line << endl                   //Trennlinie
       << head << endl                          //Legende
       << setw(16) << right << an               //Artikelnummer
       << '|'                                     //Trenner
       << setw(11) << right << sz               //Stückzahl
       << '|'                                     //Trenner
       << setw(12) << right << setprecision(2)  //Preis
       << fixed << sp 
       << '|' << endl;                            //Trenner

  return 0;
}

    
  



         
