 /*
  Björn	Bidar	
  ITA-E1
  04.12.2012
   
*/
 
 
 
 
#include <iostream>
#include <cstdio>
using namespace std;

int isLeapyear(int *year) {
   if ( *year % 4 == 0 && *year % 100 != 0 || *year % 400 == 0 )
     return 1; 
}

void getFebDays(int *year, int *frebruary_days) {
  int february_days=0;
  
  if (isLeapyear(year))
    february_days=29;
  else
    february_days=28;

}
int main() {
  int year;
  int february_days;
  
  cout	<< "Bitte Jahr eingeben:";
  cin	>> year;
  cout	<< endl;
  
  february_days=getFebDays(year);
  
  cout	<< "Der Februar hat im Jahr " << year << " " << february_days << " Tage \n";
  
  
  return 0;
}
