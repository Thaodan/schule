/* Bjoern Bidar
   ITA-E1
*/

#include <iostream>
#include <cstdlib>

using namespace std;



int main()  {

  int random_var=rand() % 100;
  int input_var;

  srand(1);
  while ( random_var != input_var )
    {
      cout << "Bitte Zahl\n";
      cin  >> input_var;
      if ( input_var != random_var )
	{
	  if ( input_var < random_var )
	    cout << "Zufallswert ist gr\303\266\303\237er, ";      
	  if ( input_var > random_var )
	    cout << "Zufallswert ist kleiner, ";
	
	  cout << "noch ein versuch\n";
	}
    }
  cout << "Gl\303\274ckwunsch Zahl war richtig\n";


  return 0;


}













