#if __cplusplus <= 199711L
#   error You need a C++11 compilant compiler
#endif
#include <iostream>
#include <random>

#define MAX_NUMBERS 1000
#define RANGE_START 0
#define RANGE_END 100
using namespace std;

int main() {
  // random var and input var
  int random_vars[MAX_NUMBERS], input_var;
  // define var to say we are succesfull or not and set it to false
  bool succesfull=false;
  // create random devices
  random_device random_device0;
  // init a discription of integer numbers starting with RANGE_START and ending with RANGE_END
  uniform_int_distribution<int> distribtion(RANGE_START, RANGE_END);

  // now gen random numbers with our random device and our distribtion 
  for (int i=0; i < MAX_NUMBERS;i++)
    random_vars[i]=distribtion(random_device0);
 
  // input dialog
  cout << "Please Random var";
  cin  >> input_var;

  // now check if input_var was found in our random numbers
  for (int &i: random_vars)
    {
      // if we she found him do this:
      if (random_vars[i] == input_var)
	{
	  cout << "Number was element " << i+1 << " of random_vars" << endl; // say where the match was
	  succesfull=true; // say that we are succesfull
	  break; // break out of our loop since we are done here
	}
    }
  
  if ( succesfull == false ) // check if input_var was not found in random_vars
    {
      cout << "Number " << input_var << "not found" << endl; // respond to user
      return 1; // return with uncessfull (negative logic)
    }
  else // if we succesfull just return to shell with succesfull (some logic here)
    return 0;
}
