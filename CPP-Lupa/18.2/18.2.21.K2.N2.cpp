//Chapter 2 variables
//Jan Haverkamp
//21.02.18
//Definition and use of vars

#include <iostream>
using namespace std;

int gVar1;				//global var
int gVar2 = 2;				//init

int main()
{
	char ch('A');			//local var w. init

	cout << "Value of gVar1: " << gVar1 << endl;
	cout << "Value of gVar2: " << gVar2 << endl;
	cout << "Character in ch: " << ch << endl;

	int sum, number = 3;		//local var w&o init

	sum = number + 5;
	cout << "Value of sum: " << sum << endl;

	return 0;
}