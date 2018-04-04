// Kapitel 3; Aufgabe 1: Wurzeln ziehen

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
  double z1(4), z2(12.25), z3(0.0121), z4;
  string head(30,'-'),
         wurzel("Wurzel von: "),
         ist(" ist: ");
  
  cout << "Wurzelzieher" << endl
       << head << endl
       << "Geben sie ein Zahl an: " << endl;
  cin  >> z4;
  cout << head << endl
       << "Ihre Zahlen: " << endl
       << wurzel << z1 << ist << sqrt(z1) << endl
       << wurzel << z2 << ist << sqrt(z2) << endl
       << wurzel << z3 << ist << sqrt(z3) << endl
       << wurzel << z4 << ist << sqrt(z4) << endl
       << head << endl;
  
  return 0;
}


  

