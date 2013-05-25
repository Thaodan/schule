/*
  Bjoern Bidar
  ITA-E1
  12.11.2012
*/

#include <iostream>

using namespace std;


int main() 
{
  float h_lohn, ist_h, soll_h, ueber_h, prozent, lohn, ueber_h_zuschlag;
  cout	<< "Bitte h_lohn";
  cin	>> h_lohn;
  
  cout	<< "Bitte soll_h";
  cin	>> soll_h;
 
  cout	<< "Bitte ist_h";
  cin	>> ist_h;
  
  ueber_h = ist_h - soll_h;
  prozent = ueber_h / soll_h * 100;
  
  if ( prozent <= 10 ) 
    ueber_h_zuschlag = 1.3;
  else
    ueber_h_zuschlag = 1.25;
  
   
  lohn = h_lohn * soll_h + ueber_h * ueber_h_zuschlag  * h_lohn  ;
  
  cout << "lohn="<< lohn << endl;
  
  
  
  
  
  return 0;
}