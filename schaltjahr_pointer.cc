 /*
  Björn	Bidar	
  ITA-E1
  04.12.2012
   
*/
 
 
 
 
#include <iostream>
#include <cstdio>
using namespace std;

int isLeapyear(int year) {
   if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
     return 1; 
   else
     return 0;
}

void getFebDays(int *year) {
  if (isLeapyear(*year))
    *year=29;
  else
    *year=29;

}
int main() {
  int year;
  
  cout	<< "Bitte Jahr eingeben:";
  cin	>> year;
  cout	<< endl;
  
  getFebDays(&year);
  
  cout << year << endl;
  
  return 0;
}
