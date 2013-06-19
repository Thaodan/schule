#include "teamarbeit.hpp"
using namespace std;

void berechne(int eingabe_werte[], int *max_wert, int *faku_wert)
{
  *max_wert=max(eingabe_werte[0], eingabe_werte[1]);
  if ( *max_wert < eingabe_werte[2])
    *max_wert=eingabe_werte[2];
  *faku_wert=faku(eingabe_werte);      
}
