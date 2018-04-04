//Chapter 6 exercise 2 choice with switch
//Jan Haverkamp
//09.03.17 23:01

#include <iostream>
using namespace std;

int main()
{
	char input;
	cout << "Menu: A B C D E F G" << endl;
	cin >> input;

	switch (input)
	{
		case 'A':
				cout << "In A";
				break;

		case 'B':
				cout << "In B";
				break;
		
		default: 
				cout << "Error!" << endl;
				return input;
				break;
	}

	return 0;
}