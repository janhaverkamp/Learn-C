//Kapitel 7; Symbolische Konstanten und Makros
//Vom 28.2.17
//Von Jan Haverkamp

//toupper.cpp
//Filter zur Umwandlung in Großbuchstaben

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	while(cin.get(c))				//Solange ein Zeichen gelesen werden kann.
	{
		switch(c)
		{
			case 'ä': c = 'Ä';
						break;
			case 'ö': c = 'Ö';
						break;
			case 'Ü': c = 'Ü';
						break;
			case 'ß': cout.put('S'); c = 'S';
						break;
			default:  c = toupper(c); // andere Zeichen
		}
	}
	return 0;
}