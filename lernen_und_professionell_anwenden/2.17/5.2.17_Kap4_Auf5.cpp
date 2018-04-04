//Kapitel 4; Aufgabe 5: Ein Programm mit hartnäckingen Fehlern

#include <iostream>  
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  char ch;
  string wort;

  cout << "Los gehts mit der <Return> Taste!";
  cin.get();

  cout << "\nGeben sie ein Wort mit höchstens drei Zeichen ein: ";
  cin >> setw(3) >> wort;

  cout << "Ihre Eingabe: " << wort << endl;

  return 0;
}
