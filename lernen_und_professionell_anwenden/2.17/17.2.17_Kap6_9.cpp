//Kapitel 6; Sprünge mit break, continue und goto
//Vom 17.2.17
//Von Jan Haverkamp

//ASCII.cpp : Ausgabe einer ASCII-Code-Tabelle

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ac(32);				//Ab Ascii-Code 32 ohne Steuerzeichen

	while(true)
	{
		cout << "\n  Zeichen   Dezimal  Hexadezimal\n\n";
		int upper;
		for(upper = ac+20; ac < upper && ac < 256; ++ac)
			cout << "      " << char(ac)		//als Character
				 << setw(10) << dec << ac
				 << setw(10) << hex << ac << endl;

		if(upper >= 256) break;

		cout << "\nWeiter -> <Return>, Ende -> <q>+<Return>";
		char answer;
		cin.get(answer);
		if(answer == 'q' || answer == 'Q')
			break;
		cin.sync();
	}
	return 0;
}