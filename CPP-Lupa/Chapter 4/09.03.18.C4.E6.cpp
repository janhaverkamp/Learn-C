//Chapter 4 exercise 6 unformatted in- & output
//Jan Haverkamp
//09.03.18 21:26

#include <iostream>
#include <string>
using namespace std;

string header = "   --- Sample program for unformatted in- or output ---   ";

int main()
{
	string word, over;

	cout << header << "Continue with return!" << endl;
	cin.get();

	cout << "\nPlease input a text with many words!" << "end with '!' and RETURN " << endl;

	cin >> word;
	getline(cin, over, '!');

	cout << "First word was: " << word << endl;
	cout << "Second: " << over << endl;

	return 0;
}