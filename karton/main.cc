
#include "karton.hpp"
#define MAX_RUNS 20
int main()
{
  /*
    DESCRIPTION
      quantity      : how many items we create
      weight        : how heavy they are
      how_many      : how many boxes we get
      item_counter  : counts till we get 12 items (see below why)
      Karton        : our karton
      *_Karton      : the address of our Karton
      Stack         : our stack full of trash to count
      *_Stack       : pointer to stack
   */
  long how_many=0, items_got;
  int item_counter=0;
  int runs=MAX_RUNS;
  stack * Stack;
  input * Input;
  karton * Karton;

  while (runs != 0 )
    {
      stack * Stack = new stack;
      input * Input = new input;
      if (!Sinput(Input)) // if Sinput returns false Quit
	{
	  delete Stack;
	  delete Input;
	  return 0;
	}
      Stack->how_many=Input->quantity/12+1;
      how_many=Stack->how_many;
      Stack->track_lenght = Input->track_lenght; 
      karton * Karton = new karton[how_many];
      // lets create our kartons with their items
      items_got=create(Karton,how_many,Input->weight);
      //     cout << Karton[0].Item
      // now count how much weight we got
      while ( how_many > 0 || items_got > 0 )
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
	      how_many--;
	    }
	  items_got--;
	}
      Stack->rweight  = ((Stack->weight + 50) / 100) * 100;
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
      runs--;
      how_many=0;
      item_counter=0;
      Karton=0;
      delete Stack;
      delete Input;
      delete Karton;
    }
  return 0;
}
  
