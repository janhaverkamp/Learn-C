//      Berechnung von Potenzen
//      mit der Standartfunktion pow()

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x(2.5), y;

  //Anhand des Prototyps erzeugt der Compiler den 
  //richtigen Aufruf bzw. eine Fehlermeldung
  
  //Berechnung von x hoch 3
  y = pow(x, 3);

  cout << "2.5 hoch drei ergibt:" << y << endl;

  //Mit der Funktion pow() kann gerechnet werden:
  cout << "2 + (5 hoch 2.5) ergibt: "
       << 2.0 + pow(5, x) << endl;
  
  return 0;
}
