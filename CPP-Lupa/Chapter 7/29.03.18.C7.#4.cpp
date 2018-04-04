//Capter 7 exercise 4 "stdin"
//Jan Haverkamp
//29.03.18 00:10

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string row;
	int number(0);

	while(getline( cin, row))		//As long a cin can be read
	{
		cout << setw(5) << ++number << ": "
			 << row << endl;
	}
	return 0;
}