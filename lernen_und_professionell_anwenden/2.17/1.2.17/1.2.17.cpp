#include <iostream>
using namespace std;

void linie(), meldung();          //Prototypen

int main()
{
  cout << "Hallo! Das Programm startet in main()."
       << endl;
  linie();
  meldung();
  linie();
  cout << "Jetzt am Ende von main()" << endl;

  return 0;
}

void linie ()
{
  cout << "-----------------------------------" << endl;
}

void meldung()
{
  cout << "In der Funktion meldung()." << endl;
}

