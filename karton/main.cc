#include "karton.hpp"

int main()
{
  long quantity_counter; // our private vars to count our results
  char item_counter=0; // our counter to test if we need to open a new karton 

  while (1)
    {
      stack * Stack = new stack; // make new stack and new input
      input * Input = new input;
      if (!Sinput(Input)) // if Sinput returns false Quit
	{
	  delete Stack; // cleanup
	  delete Input;
	  break;
	}
      /* 
	 get how many kartons we need
	 we need at least one
       */
      Stack->how_many = Input->quantity/12;
      if ( Stack->how_many == 0 )
        Stack->how_many=1;
      
      //how_many = Stack->how_many; //
      Stack->track_lenght = Input->track_lenght; 
      karton * Karton = new karton[Stack->how_many]; // make our kartons
      quantity_counter = Input->quantity;
      // lets create our kartons with their items
      create(Karton,Stack->how_many,Input->weight,Input->quantity);
      // now count how much weight we got
      while ( quantity_counter  > 0 ) // do this till we out of  items
	{
	  Stack->weight+=Karton->Items[item_counter].weight;
	  Stack->price+=Karton->Items[item_counter].price;
	  
	  /* if we are at the 12th item: 
	     lets go to the next karton and add the weight of the karton
	  */
	  item_counter++;
	  if ( item_counter == 12 )
	    {
	      item_counter=0;
	      Stack->weight+=Karton->weight;
	      Karton++;
	    }
	  quantity_counter--;
	}
      Stack->rweight  = Stack->weight % 100;
      if (Stack->rweight == 0 ) 
	Stack->rweight=Stack->weight;
      else
	Stack->rweight+=100;
      
      Stack->wprice   = (Stack->rweight / 100) * 0.06;
      Stack->fprice   = Stack->wprice + Stack->price;
      if ( Stack->fprice > 50000  )
	Stack->fprice-=(Stack->fprice/100)*7;
      else
	{
	  if ( Stack->fprice > 10000 )
	    Stack->fprice-=(Stack->fprice/100)*5;
	  else
	    if (Stack->fprice == 10000)
	      Stack->fprice-=(Stack->fprice/100)*3;
	}

      output(Stack);
      item_counter=0;
      Karton=0;
      delete Stack;
      delete Input;
      delete Karton;
    }
  return 0;
}
  
