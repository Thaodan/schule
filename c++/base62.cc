#include <iostream>
#include <cmath>

using namespace std;

#define MAX_NUMBERS 10

int cbs62(char n) 
{
  if ( n < 58 )
    n-=48;
  else
    {
      if ( n < 91 )
	n-=55; 
      else
	n=-61;
    }
  
  return n;
}
int main(int argc, char *argv[]) 


  char  a[6];
  for (int argument_index; argument_index < argc; argument_index++)
    {
      for (int argument_arg_index; 
	   argument_arg_index < (sizeof(*argv[argument_index]) / 8); 
	   argument_arg_index++)
	a[argument_arg_index]=argv[argument_index][argument_arg_index];
    }


	  
  for (char &n : a )
    {
      x = 16  * x + cbs62(n);
    }

  cout << x << endl;

  return 0;
}
