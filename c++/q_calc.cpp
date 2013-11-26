/* Bjoern Bidar
   ITA-E1
   
*/


#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#define DEBUG
// enable debug output if needed
#ifdef DEBUG
#define MSG_DEBUG(db_string) (cout << db_string << endl)
#else
#define MSG_DEBUG(debug_string) ()
#endif 


// config stuff
#define RND_VAR_RANGE 1000
#define MAX_TERMS 1 // define how may terms long is our calc 


using namespace std;

int main()
{
  char operators[]={ '/', '*', '+', '-' };
  char calc_operators[MAX_TERMS], calc_operators_sorted[MAX_TERMS];
  int  current_calc_operator_rnd;
  char current_calc_operator;
  // for point before line
  char calc_operator_last; 
  float calc_numbers_last[1], calc_number_saved;

  float current_rnd_numbers[1], input_result, calc_result, calc_numbers[MAX_TERMS*2], calc_numbers_sorted[MAX_TERMS*2];
  // init random 
  srand(time(NULL));

  // gen calc
  for (int rnd_term=0; rnd_term <= MAX_TERMS; rnd_term++)
    {
      // select rnd operator
      current_calc_operator_rnd=rand() % 4;
      current_calc_operator=operators[current_calc_operator_rnd];
      MSG_DEBUG("current operator is" << current_calc_operator);
      
      // gen rnd numbers
      current_rnd_numbers[0]=rand() % RND_VAR_RANGE;
      MSG_DEBUG ("current rnd number is" << current_rnd_numbers[0]);
      current_rnd_numbers[1]=rand() % RND_VAR_RANGE;
      MSG_DEBUG ("current rnd number is" << current_rnd_numbers[1]);

      // save calc_numbers from current_rnd_numbers
      calc_numbers[rnd_term]=current_rnd_numbers[0];
      calc_numbers[rnd_term+1]=curcompositorrent_rnd_numbers[1];
      
      calc_operators[rnd_term]=current_calc_operator;


    }
  // move vars in sorted vars, so that we can sort
  calc_operators_sorted=calc_operators;
  calc_numbers_sorted=calc_numbers;
  // sort operators and numbers (point before line)
  for (int rnd_term=0; rnd_term <= MAX_TERMS; rnd_term=+2)
    {
      if ( ! calc_operator_last )
	{
	  calc_operator_last=calc_operators[rnd_term];
	  calc_numbers_last[0]=calc_numbers_sorted[rnd_term];
	  calc_numbers_last[1]=calc_numbers_sorted[rnd_term+1];
	  MSG_DEBUG("no last_operator, saving current operator in calc_operator_last" << calc_operator_last);
	}
      else
	{
	  MSG_DEBUG("had last operator, current operator is" << calc_operators_sorted[rnd_term]);
	  switch(calc_operators_sorted[rnd_term])
	    {
	    case '/':
	    case '*':
	      {
		// if last operator was point replace it and his numbers  with the current point operator and his numbers
		if ( calc_operator_last == "+" || calc_operator_last == "-" )
		  {
		    MSG_DEBUG("last operator was line, replacing line with point and replacing point with line");
		    calc_operators_sorted[rnd_term-1]=calc_operators_sorted[rnd_term];
		    calc_operators_sorted[rnd_term]=calc_operator_last; 
		    calc_number_saved=calc_numbers_sorted[rnd_term];
		    calc_numbers_sorted[rnd_term]=calc_numbers_sorted[rnd_term+1];
		    MSG_DEBUG("replacing" << calc_number_saved << " with" << calc_numbers_sorted[rnd_term]);
		    calc_number_saved=calc_numbers_sorted[rnd_term];
		  }
		break;
	      }
	    // current operator has line  everything is ok
	    case '+':
	    case '-':
	      {
		break;
	      }
	    }
	  MSG_DEBUG("new last operator is" << calc_operators_sorted[rnd_term]);
	  calc_operator_last=calc_operators_sorted[rnd_term-1];
	  calc_numbers_last[0]=calc_numbers_sorted[rnd_term];
	  calc_numbers_last[1]=calc_numbers_sorted[rnd_term+1];
	}   
    }

  // now all numbers are sorted calculate everything
  for (int rnd_term=0; rnd_term <= MAX_TERMS; rnd_term=+2)
    {
      switch(calc_operators_sorted[rnd_term])
      {
	case '+':  calc_result+=calc_numbers_sorted[rnd_term] + current_rnd_numbers[rnd_term+1]; break;
	case '-':  calc_result+=calc_numbers_sorted[rnd_term] - calc_numbers_sorted[rnd_term+1]; break;
	case '*':  calc_result+=calc_numbers_sorted[rnd_term] * calc_numbers_sorted[rnd_term+1]; break;
	case '/':  calc_result+=calc_numbers_sorted[rnd_term] / calc_numbers_sorted[rnd_term+1]; break;
      }
      MSG_DEBUG("current result is" << calc_result);
    }
  MSG_DEBUG("result is: " << calc_result);
  // now we have the result, output the unsorted calculation
  for (int rnd_term=0; rnd_term <= MAX_TERMS;  rnd_term+=2)
    
  // check if input is right
    if (! calc_result == input_result )
      {
	cout << "result was rong, result is:" << calc_result;
	return 1;
      }

  return 0;

}

