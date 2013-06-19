#include "teamarbeit.hpp"
using namespace std;

bool eingabe(int eingabe[])
{ 
  int i=0;
  cout<<"Geben sie drei Zahlen ein(0 f\303\274r beenden)" << endl;
  while(i<3)                
    {
      cin>>eingabe[i];  
      if (eingabe[i]==0)
	return false; 

      i++;
    }
  return true;
}


