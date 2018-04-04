//Chapter 3 exercise 4
//strings
//Jan Haverkamp
//21.02.18 19:32

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text ("learned again something"), string1, string2;

	cout << "the string: " << text << " is " << text.length() << " caracters long"<< endl;

	cout << "type in a text: ";
	getline(cin, string1);
	cout << endl << "and another:";
	getline(cin, string2);
	cout << endl << string1 + '*'  + string2 << endl;

	return 0;
}