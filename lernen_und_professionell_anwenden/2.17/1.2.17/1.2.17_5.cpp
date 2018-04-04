#include <iostream> 
#include <climits>        //Definition von INT_MIN
using namespace std;

int main()
{
  cout << "Wertebereich der Typen int und unsigned int"
       << endl << endl;
  cout << "Typ            Minimum        Maximum"
       << endl
       << "-------------------------------------"
       << endl;
  cout << "int          "<<INT_MIN << "         "
                         <<INT_MAX << endl;

  cout << "unsigned int "<<"      0             "
                         <<UINT_MAX<< endl;
  return 0;
}
