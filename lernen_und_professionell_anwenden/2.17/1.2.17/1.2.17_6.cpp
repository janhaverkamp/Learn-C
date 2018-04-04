// Hexadiezimale Zahl dezimal ausgeben und umgekehrt.
//
#include <iostream>
using namespace std;

int main()
{
  //cout gibt ganze Zahlen standartmäßig dezimal aus:
  cout << "Wert von 0xFF = " << 0xFF << " dezimal"
       << endl;           //Ausgabe: 255 dezimal
  //Der Manipulator hex stellt die Ausgabe auf 
  //hexadezimal um (dec wieder auf dezimal):
  cout << "Wert von 27 = " << hex << 27 <<" hexadezimal"
       << endl;           //Ausgabe: 1b hexadezimal
  return 0;
}
