/* Bjoern Bidar 
 * ITA-E1
 * 27.05.2013
 */

#include "wurfel.hpp"

using namespace std;
int main()
{
  int n=0;
  double durchschnitt;
  eingabe(n);
  verarbeitung(n, &durchschnitt);
  ausgabe(durchschnitt);
  cin.get();
  return 0;    
}


void eingabe(int &anzahl)
{
  cout << "Wie oft wollen sie wurfeln?" << endl;
  cin  >> anzahl;
}

void verarbeitung(int z, double *d)
{
  int Z=z, rnd;
  uniform_int_distribution<int> reichweite(1, 6);
  random_device random_device0;
  while ( Z > 0 ) 
    {
      rnd=reichweite(random_device0);
      *d+=rnd; 
      Z--;
    }
  *d/=z;
}

void ausgabe(double durch)
{
  cout << endl << "Durschnitt der Wurfe betragt:" << durch << endl;
}


 
