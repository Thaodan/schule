/* Bjoern Bidar 
   ITA-E1 
   09.01.2013
*/

#include <iostream>
#include <cstdio>


#define RANGE 100 // range of numbers we collect

using namespace std;

int main() {
  int stack=0;

  for (int i=1; i <= RANGE; i++)
    {
      stack=stack+i;
     
    }

  

  cout << stack;

  return 0;


}
