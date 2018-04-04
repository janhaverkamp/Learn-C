//Umfang und Fläche einer Kreises mit Radius 1.5

#include <iostream>
using namespace std;

const double pi = 3.141593;

int main()
{
  double flaeche, umfang, radius(1.5);

  flaeche = pi * radius * radius;
  umfang  = 2 * pi * radius;

  cout << "Radius:      " << radius << endl
       << "Umfang:      " << umfang << endl
       << "Flaeche:     " << flaeche<< endl;
  
  return 0;
}
