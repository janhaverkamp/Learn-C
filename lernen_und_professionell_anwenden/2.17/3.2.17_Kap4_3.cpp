//Kapitel 4; Ausgabe in Felder 


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << '|' << setw(6) << 'X' << '|'<<endl;

  cout << fixed << setprecision(2)
       << setw(10) << 123.4 << endl
       << "12345677890" << endl;
  return 0;
}
