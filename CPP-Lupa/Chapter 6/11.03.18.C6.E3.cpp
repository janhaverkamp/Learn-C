//Chapter 6 exam 4 random number game
//Jan Haverkamp
//11.03.18 12:03

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	cout << "Time-guess game" << endl
		 << "Guess a number between 1 and 15 that the computer is hiding from you" << endl;

		char m;
		long sec;
		int ran(0), inp(0);


		do{
			time(&sec);						//get seconds and store in >> sec
			srand((unsigned)sec);			//initialize srand with (sec)

			for(; !( ran > 0 && ran < 16 );)
				ran = rand();

			cout << "Lets begin:" << endl;
			
			for(int e(0) ; e < 3 ; e++ ){
				cout << "Guess: ";
				cin >> inp;

				if(inp == ran){
					cout << "congrats, you won!!" << endl;
					break; }

				else{
					if( inp < ran ){cout << "Your number is lower" << endl;}
					else{cout << "Your number is higher" << endl;}
					}}
			cout << "Do you wanna quit? [q] to quit: ";
			cin >> m;
		}while(m != 'q');
	return 0;
}