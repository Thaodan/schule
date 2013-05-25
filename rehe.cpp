#include <iostream>

using namespace std;
int  toete_rehe(int jahre) {
  int rehe=0;
  if ( jahre > 0 )
    { 
      rehe=3*toete_rehe(jahre-1)-1;
      if ( rehe > 40 )
	{
	  rehe=rehe- int (cell(rehe0,6));
	  return rehe;
	}
    }
  else
    return 12;
}


int main() {
  int jahre;
  int rehe;
  
  cout << "Bitte Jahre";
  cin >> jahre;
  
  rehe=toete_rehe(jahre);

  cout << rehe << endl;
  return 0;
}
