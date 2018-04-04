//Kapitel 7, Standartmakros zur Behandlung von Zeichen

//toupper.cpp
//Filter zur Umwandlung in Großbuchstaben

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	while(cin.get(c))
	{
		switch(c)
		{
			case 'ä':	c = 'Ä';
						break;
			case 'ü':	c = 'Ü';
						break;
			case 'ö':	c = 'Ö';
						break;
			case 'ß':	cout.put('S'); c = 'S';
						break;
			default:	c =toupper(c);		//andere Zeichen
		}
		cout.put(c);						//Zeichen ausgeben 
	}
	return 0;
}