#include "teamarbeit.hpp"
using namespace std;

int main()
{
  int eingabe_werte[EINGABE_MAX_WERTE];
  int max_wert, faku_wert;
  while ( eingabe(eingabe_werte) )
    {
      berechne(eingabe_werte, &max_wert, &faku_wert);
      ausgabe(max_wert, faku_wert);

      /*
	Variablen resetten
       */
      eingabe_werte[0]=0;
      eingabe_werte[1]=0;
      eingabe_werte[2]=0;
      max_wert=0;
      faku_wert=0;
    }

  return 0;
}
