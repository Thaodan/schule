/* Bjoern Bidar
   ITA-E1 
   13.02.2013
*/


#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
  int input_trys, random_number, random_number_input,
    range_start, range_end;
  char input_event_quit='y';
  
  // main loop
  do
    {
      // reset runtime vars and init srand
      input_trys=0;
      input_event_quit='y';
      srand(time(NULL));

      cout << "range_start" << endl;
      cin  >> range_start;
      
      cout << "range_end" << endl;
      cin  >> range_end;
      
      random_number = range_start + rand() %  ( range_end + 1 - range_start);
      do 
	{
	  input_trys++;
	  if ( input_trys != 3 )
	    {
	      cout << "Please gues random var" << endl;
	      cin  >> random_number_input;
	  
	      if ( random_number_input == random_number )
		{
		  cout << "SUCCESS" << endl;
		  break;
		}
	      else
		{
		  if ( random_number_input < random_number )
		    cout << "Nice try to small" << endl;
		  if ( random_number_input > random_number )
		    cout << "Nahh, to big" << endl;
		}
	    }
	  else
	    cout << "You loosed, random numbers was: " << random_number << endl;

	} while ( input_trys > 3);
      cout << "Not again? N please" << endl;
      cin  >> input_event_quit;

    } while ( input_event_quit != 'n' && input_event_quit != 'N' );
  return 0;
}
