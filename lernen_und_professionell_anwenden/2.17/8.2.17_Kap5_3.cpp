//Kapitel 4; Zuweisungen

//Demonstration von zusammengesetzen Zuweisungen

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float x, y;

  cout << "\n Bitte Startwert eingeben: ";
  cin >> x;

  cout << "\n Um wieviel erhöhen Sie? ";
  cin >> y;

  x += y;
  
  cout << "\n Jetzt wird vervielfacht! "
       << "\n Bitte einen Faktor eingeben: ";
  cin >> y;

  x *= y;

  cout << "\n Schließlich dividieren wir noch. "
       << "\n Bitte einen Divisor eingeben: ";
  cin >> y;

  x /= y;

  cout << "\n Ihre heutige Glückszahl: "
       << fixed << setprecision(0) 
       << x << endl;

  return 0;
}
