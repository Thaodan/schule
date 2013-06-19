/*
  gen numbers from 1-49  and check if numbers in our list match 

  
*/

/*
  TODO: 
        state reset after each mainloop
*/
#include <iostream>
#include <iomanip>
#include <random>
#include "curses.h"

#define SCHEIN_RANGE_START 1
#define SCHEIN_RANGE_END 49
#define MAX_RNDNUMBERS 6 // how many random numbers we need

using namespace std;


void locher(int *schein_rohling, int* schein)
{    
  int ziehung[MAX_RNDNUMBERS];
  random_device random_device0;
  uniform_int_distribution<int> distribtion(SCHEIN_RANGE_START,SCHEIN_RANGE_END);
  for (int i=0; i < MAX_RNDNUMBERS;i++)
    ziehung[i]=distribtion(random_device0);
  
  for (int i0=0; i0 < SCHEIN_RANGE_END;i0++ )
    {
      for (int i1; i1 < MAX_RNDNUMBERS;i0++)
	{
	  if ( *schein_rohling[i0] ==  *ziehung[i1] )
	    schein[i0]='0';
	  else
	    {
	      schein[i0]=schein_rohling[i0];
	    }			
	}   
    }
}
/*
  primtive function to print our schein
  displays x if numbers 0
  does newline if our counter is AUSGABE_LINEBREEAK
*/			    
#define AUSGABE_LINEBREAK 6
void ausgabe_schein(int *schein)
{
  int linebreak_counter;
  for (;schein < SCHEIN_RANGE_END; schein++)
    if ( *schein == 0 ) 
      printw("x");
    else
      printw("%d", *schein);
  
  if ( linebreak_counter == AUSGABE_LINEBREAK )
    {
      printw("\n");
      linebreak_counter=0;
    }
  else
    linebreak_counter++;
}

/*
  See description above
*/
bool ResultFrame(int *schein) {
  char action_char;

  init_pair(1, COLOR_GREEN, COLOR_RED); 
  color_set(1, 0);

  printw("Zum beenden q und zum erneut machen r drucken\n");
  printw("Ergebnis: \n");
  ausgabe_schein(schein);
  /*
    question if again or not
    
   */
  while( (action_char=getch()) != NULL )
    switch(action_char)
      {
      case 'r':
      case 'R':
	{
	  clear();
	  return true;
	}
      case 'q':
      case 'Q':
      case default:
	{
	  return false;
	}
      }
  return false;
}

/*
  what we do:
  init types
  call our locher
  show result window


*/

int main(void)
{
  /*
    TODO: improve type handling
  */
  int schein[SCHEIN_RANGE_END];
  int schein_rohling[SCHEIN_RANGE_END]=
  {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 
    28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 
    42, 43, 44, 45, 46, 47, 48, 49
  };
  
  /* init curses stuff */
  initscr();
  noecho();
  do 
    {
      locher(schein_rohling, schein);
    }
  while (ResultFrame(schein));
  endwin();
  return 0;
}
