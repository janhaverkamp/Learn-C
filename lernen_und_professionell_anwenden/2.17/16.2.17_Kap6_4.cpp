//Kapitel 6; do-while-Schleife
//Vom: Do. 16.2.17
//Von: Jan Haverkamp
//ton.cpp

#include <iostream>
using namespace std;

const long delay = 10000000L;

int main()
{
	int tic;
	cout <<  "\nWie oft soll ein Ton ausgegeben werden? ";
	cin >> tic;

	do
	{
		for(long i = 0; i < delay; i++)
			;
		cout << "Jetzt kommt der Ton!\a" << endl;
	}while(--tic > 0);

	cout <<"Ende der akustischen Einlage!\n";
	return 0;
}

