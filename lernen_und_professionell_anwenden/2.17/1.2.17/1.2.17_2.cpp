#include <iostream>
using namespace std;

void pause();         //Prototyp

int main()           //Hauptprogramm
{
  cout << endl << "Lieber Leser,"
       << endl << "goennen Sie"
       << " sich jetzt eine ";
  pause();
  cout << "!" << endl;

  return 0;
}

void pause()
{
  cout << "PAUSE";
}

