/* Bjoern Bidar 
   ITA-E1
   23.01.2013
*/

#include <iostream>

#define TARGET_NUMBER 1(10^6)
using namespace std;

int main() {
  float million;
  int rate, years;

  while ( million <= TARGET_NUMBER )
    {
      million=(million*rate/100)+million;
      years++
    }
  cout << "In " << years << " sind sie Millioner";

  return 0;

}
  
