/* Bjoern Bidar
   ITA-E1 
   19.02.2013
*/


#include <iostream>
using namespace std;

int main() {
  int n_word, N_word;
  
  cout << "please give me n...";
  cin  >> n_word;

  N_word= n_word - 3;
  for (int Nagger=3; Nagger <= N_word;Nagger+=3)
    {
      cout << Nagger << ",";
    }
  
  if ( (N_word % 3 ) == 0 || N_word == 0 )
    {
      cout << n_word << endl;
    }

  return 0;

}
  
