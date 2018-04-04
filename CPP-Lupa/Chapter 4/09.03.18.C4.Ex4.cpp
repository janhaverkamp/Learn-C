//Chapter 4 exam 4 exercise 5
//Jan Haverkamp 
//09.03.18 22:16

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch;
	string word;

	cout << "Lets go with [RETURN]";
	cin.get();

	cout << "Type in a text with only 3 words: ";
	getline(cin, word);

	cout << "Your input:" << word << endl;

	return 0;
}