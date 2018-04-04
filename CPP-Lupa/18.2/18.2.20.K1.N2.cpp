//Ein Programm mit mehreren Funktionen und Kommentaren
//Jan Haverkamp
//20.2.18 00:11

#include <iostream>
using namespace std;

void line(), meldung();         //Prototypes

int main()
{
    cout << "Hello this program starts in main()."
         << endl;
    line();
    meldung();
    line();
    cout << "Now at the end of main()." << endl;
    return 0;
}

void line()                    //Outputs a line
{
    cout << "--------------------------------------" << endl;
}

void meldung()                  //Send a warning
{
    cout << "Inside the function warning" << endl;
}