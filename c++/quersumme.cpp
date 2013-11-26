/* Bjoern Bidar
   ITA-E1
   30.01.2013
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int crossfoot=0, number;
  cout << "Bitte Nummer\n";
  cin  >> number;



  while ( number > 0 )
    {
      crossfoot=crossfoot + number % 10;
      number=number/10;
    }
  
  
  return 0;  
}
