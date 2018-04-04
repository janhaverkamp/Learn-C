//Chapter 6 exercise 1 mean

#include <iostream>
using namespace std;

int main()
{
	int x, i(0);
	float sum(0);

	cout << "Please input some numbers to calculate the mean value."
		 << "Stop with any key !" << endl;

	while(cin >> x)
	{
		sum = sum + x;
		++i;
	}

	cout << "Average of all numbers: " << sum / i << endl;

	return 0;
}