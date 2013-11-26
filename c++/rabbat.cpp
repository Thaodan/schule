 /*
  Bjoern Bidar
  ITA-E1
  21.11.2012
*/
 
 
#include <iostream>
#include <cstdio>

using namespace std; 

int main() {
  float user_price, user_amount, user_years, user_rabatt_p, user_rabatt;
  float rabatt_hoch=10, rabatt_niedrig=2, rabatt_mittel=5;
  
  cout	<< "Bitte Jahre\n";
  cin	>> user_years;
  
  cout	<< "Bitte Preis\n";
  cin	>> user_price;
  
  
  cout	<< "Bitte Menge\n";
  cin	>> user_amount;
  
  
  if ( user_amount  <= 500 )
    user_rabatt_p=rabatt_niedrig;
  else
  {
    if ( user_amount <= 1000 )
      user_rabatt_p=rabatt_mittel;
    else
      user_rabatt_p=rabatt_hoch;
  }
  
  
  
  user_rabatt=(user_price * user_amount)*user_rabatt_p /1000;
  
  cout	<< "Rabatt:"	<< user_rabatt << endl;
  
  
  return 0;
}

 
  
  
  
  
  
