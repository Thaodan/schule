/*
  gen numbers from 1-49  and check if numbers in our list match 

  
*/

#include <iostream>
#include <iomanip>
#include <random>


#define RANGE_START 1
#define RANGE_END 49
#define MAX_NUMBERS 6 // how many random numbers we need

using namespace std;
void locher(int *schein_rohling, char* schein)
{    
  int ziehung[MAX_NUMBERS];
  ostringstream 'oss';
  random_device random_device0;
  uniform_int_distribution<int> distribtion(RANGE_START, RANGE_END);
  for (int i=0; i < MAX_NUMBERS;i++)
    ziehung[i]=distribtion(random_device0);
  
  for (int i0=0; i0 < RANGE_END;i0++ )
    {
      for (int i1; i1 < MAX_NUMBERS;i0++)
	{
	  if ( schein_rohling[i0] ==  ziehung[i1] )
	    schein[i0]='x';
	  else
	    {
	      oss << schein_rohling[i0];
	      schein[i0]=oss;
	    }			
	}   
    }
}
			       
void print_result(char *schein)
{
  for (;schein < RANGE_END; schein++)
    cout << *schein << setw(2) << endl;
}
int main(void)
{
  char schein[MAX_NUMBERS];
  int schein_rohling[RANGE_END]=
  {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 
    28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 
    42, 43, 44, 45, 46, 47, 48, 49
  };
  locher(schein_rohling, schein);
  print_result(schein);
  
  return 0;
}
