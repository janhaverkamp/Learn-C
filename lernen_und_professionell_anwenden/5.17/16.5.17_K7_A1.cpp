//Kapitel 7; Aufgabe 1
//Testprogramm für myMakros.h

#include "myMakros.h"
#define HEADER cout << "Willkomen bei dem Testprogramm\n"< endl;

int main()
{
	HEADER

	int menu, end(0);

	do{
		cout << "'b' fuer ABS" << endl
			 << "'<' fuer MIN" << endl
			 << "'>' fuer MAX" << endl;

		menu = getch();

		switch(menu)
		{
			case 'b': cout << "ABS(cin.get(char))" << endl;
					break;

			case '<': cout << MIN()
					break;

			case '>': cout >> MAX()
 
			default:	break; 
		}

		cout << "Wollen sie Wiederholen?" << endl;
		cin >> end;

		

		}while(end!=1);
		return 0;

}