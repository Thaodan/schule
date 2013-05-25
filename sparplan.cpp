/* Bjoern Bidar
   ITA-E1
   04.02.2013
*/


#include <iostream>
#include <math.h>

#define RATE_1 2.5
#define RATE_2 3.8
#define RATE_3 4.5

using namespace std;

int main() {
  float kapital, rate;
  int duration;
  
  while (1)
    {
      // reset values
      kapital=0;
      rate=0;
      duration=0;
      
      cout << "Bitte Kapital\n";
      cin  >> kapital;
      
      if ( kapital == 0 )
	break; // abort loop if kapital is 0
      cout << "Bitte Laufzeit\n";
      cin  >> duration;
      
      if ( duration <= 2 )
	rate = RATE_1;
      else
	  {
	    if ( duration <= 10 )
	      rate = RATE_2;
	    else
	      rate = RATE_3;
	  }
      kapital = pow(kapital * (1 + rate / 100 ), duration );
      cout << "Kapital: " << kapital << endl;
    }
      
  return 0;
}
