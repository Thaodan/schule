/*
  Björn Bidar	      
  ITA-E1
  04.12.2012
*/




#include <iostream>
#include <cstdio>
using namespace std;


int main() {

  float capital;
  int rate, years;

  cout << "Bitte Kapital\n";
  cin  >> capital;

  cout << "Bitte Zinssatz\n";
  cin  >> rate;

  cout << "Bitte Jahre\n";
  cin  >> years;

  for (int i=0; i < years; i++)
    {
      capital=capital+(capital*rate/100);
    }

  cout << "End Kapital:" << capital << endl;


}
