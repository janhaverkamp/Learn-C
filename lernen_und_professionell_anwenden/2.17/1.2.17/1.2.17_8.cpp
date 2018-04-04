#include <iostream>
using namespace std;

int gVar1;
int gVar2(2);

int main()
{
  char ch('A');           //lokale Variable mit Initialisierung
                          //oder: char ch= 'A';

  cout << "Wert von gVar1: " << gVar1 << endl;
  cout << "Wert von gVar2: " << gVar2 << endl;
  cout << "Zeichen in ch : " << ch    << endl;

  int summe, zahl(3);     //lokale Variablen mit und ohne Initialisierung

  summe = zahl + 5;
  cout << "Wert von Summe: " << summe << endl;
  return 0;
}
  

