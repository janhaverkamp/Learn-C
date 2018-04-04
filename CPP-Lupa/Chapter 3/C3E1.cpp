//Capter 3 exercise 1
//Use of standart classes
//Working with strings
//Jan Haverkamp
//21.02.18 18:14

#include "iostream"
#include "string.h"
using namespace std;

int main()
{
	//define 4 strings
	string	prompt("What is your name: "),
		name,				//empty
		line( 40, '-'),			//string with 40 '-'
		total = "Hallo";		//also possible!
	cout << prompt;				//input 
	getline( cin, name);			//name (one line) read-in

	total = total + ' ' + name;			//chain strings and declare

	cout << line << endl			//output line and name
		<< total << endl;
	cout << "Your name is "			//output length
		<< name.length() << " Caracters long!" << endl;
	cout << line << endl;
	return 0;
}