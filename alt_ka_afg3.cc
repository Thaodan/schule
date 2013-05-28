#include <iostream>
using namespace std;

int main(void)
{
  double erg=0, z[10];
  cout << endl << "Eingabe der 10 Werte" << endl;
  //Ergänzung1
  for (int i=0; i < 10; i++)
    {
      cin << z[i];
    }
  
  //Ergänzung2
  erg=z[0];
  for (int i=1; i < 10;i++)
    {
      if ( z[i] < erg)
	erg=z[i]
    }
  
  cout << end << "Der kleinste Wert ist " << erg << endl;
  cin.get
  cin.get

  return 0;
}
