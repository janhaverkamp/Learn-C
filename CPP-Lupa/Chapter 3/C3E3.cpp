//Chapter 3 exercise 3 
//a program with mistakes
//Jan Haverkamp
//21.02.18 19:22

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string meldung ("\nmistakes make u smarter!");
	cout << meldung << endl;

	int len = meldung.length();
	cout << "The length of the string:" << len << endl;

	//also a random output
	srand(12.5);

	int a, b;
	a = rand();
	srand(a);
	b = rand();
	cout << "\n random number: " << b << endl;

	return 0;
}
