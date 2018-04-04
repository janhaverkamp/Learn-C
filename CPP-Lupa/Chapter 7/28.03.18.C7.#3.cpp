//Chapter 7 execise 3 "toupper"
//28.03.18 23:57
//Jan Haverkamp

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char c;
	while(cin.get(c))
	{
		switch (c)
		{
			case 'ä': c = 'Ä';
			break;

			case 'ö': c = 'Ö';
			break;

			case 'ü': c = 'Ü';
			break;

			case 'ß': cout.put('S'); c = 'S';
			break;

			default:   c = toupper(c);
		}

		cout.put(c);
	}
	return 0;
}