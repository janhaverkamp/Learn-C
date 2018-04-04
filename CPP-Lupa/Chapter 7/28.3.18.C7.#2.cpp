//Capter 7 exercise 2 "ball"
//Simulating a bouncy ball
//Jan Haverkamp
//28.03.18 23:22

#include <iostream>
#include <string>
using namespace std;

#define DELAY 10000000L
#define CLS   (cout << "\033[2J")
#define LOCATE(z,s) (cout << "\033[" << z << ';' << s << 'H' )

int main()
{
	int x(2), y(3), dx(1), v(0);
	string ground(60, '-'), header = "**** BOUNCY BALL ****";

	CLS;
	LOCATE(1,25); cout << header;
	LOCATE(25,1); cout << ground;
	
	for(int i(0); i <= 100; i++)
	{
		LOCATE(y,x); cout << 'o' << endl;				//Display ball
		for( long wait = 0; wait < DELAY; ++wait)
			;

		if(x == 1 || x == 79) dx = -dx;					//Change 

		if(y == 24)
		{
			v = -v;
			if(v==0) v = -7;
		}
		v += 1;
		LOCATE(y,x); cout << ' ';						//Clear screen
		y += v; x += dx;
	
	}
}