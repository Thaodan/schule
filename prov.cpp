#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
  float umsatz, provison, provison_prozent;
  float provison_prozent_niedrig=5, provison_prozent_hoch=7.5;
  float provison_hoch_mindest_umsatz=100000000;
  cout	<< "Bitte Umsatz eingeben.\n";
  cin	>> umsatz;
 
  if ( umsatz >= provison_hoch_mindest_umsatz ) 
  {
    cout << "Ihre Provisonsprozentsatz ist:"	<< provison_prozent_hoch << endl;
    provison_prozent=provison_prozent_hoch;
  }
  else
  {
    cout << "Ihre Provisonsprozentsatz ist:"	<< provison_prozent_niedrig << endl;
    provison_prozent=provison_prozent_niedrig;
  }
  
  provison=umsatz*provison_prozent/100;
  
  cout << "Ihre Provision ist:" << provison << endl;
 
  
  
  
#if defined _WIN32 || defined _WIN64 
  getchar();
#endif
}