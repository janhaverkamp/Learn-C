// Es werden drei Zufallszahlen ausgegeben
//
#include <iostream>             //Deklaration von cin und cout
#include <stdlib.h>             //Prototypen von srand() und rand()

using namespace std;

int main()
{
  unsigned int keim;
  int z1, z2, z3;

  cout << "----------------Zufallszahlen---------------- \n" << endl
       << "Initialisierung der Zufallszahlengenerators\n"
       << "Geben Sie eine ganze Zahl ein: " << endl;
  cin  >> keim;                 //Eine ganze Zahl einlesen

  srand( keim);                 //und damit den Zufallszahlengenerator initialisieren

  z1 = rand();
  z2 = rand();
  z3 = rand();

  cout << "Ihre Zahlen:" << endl
       << z1 << endl << z2 << endl << z3 << endl
       << "Viel Spaß" << endl;

  return 0;
}


