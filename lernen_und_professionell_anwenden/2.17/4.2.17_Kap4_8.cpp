//Kapitel 4; Aufgabe 2: Formatierung von ausgegebenen Zahlen

#include <iostream>                     //Für cin cout
#include <iomanip>                      //Für Feldmanipulation
using namespace std;                    //Für std::cout

int main()
{
  cout << left << setprecision(6) << fixed << setw(15) << 0.123456 << endl    //a
       << right << setprecision(2) << fixed << setw(12) << 23.987 << endl     //b
       << scientific << -123.456 << endl;                                     //c
  
  return 0;
}
