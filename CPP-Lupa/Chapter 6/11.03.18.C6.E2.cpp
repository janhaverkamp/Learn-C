//Chapter 6 exam 3
//Jan Haverkamp
//11.03.18 11:37

#include <iostream>
using namespace std;

 int main()
 {
	uint in;
	int lim;

	cout << "Type in a number between 0 and 65535: ";
	cin >> in;
	cout << "And a limit of numbers: ";
	cin >> lim;

	srand(in);

	for(int i(0), j(0); i <= lim; i++)
	{
		for(; !(j > 1 && j < 100);)
		{
			j = rand();
		}
		cout << j << endl;
		j = 0;
	}

	 return 0;
 }