//Kapitel 4; Formatiete Ausgabe von Gleitpunktzahlen

#include <iostream>

using namespace std;

int main()
   {
     double x(12.0);

     cout.precision(2);                         //Genauigkeit auf 2 setzen
     cout << " Standart:   " << x << endl
          << " showpoint:  " << showpoint << x << endl
          << " fixed:      " << fixed << x << endl
          << " scientific: " << scientific << x << endl;

     return 0;
   }
