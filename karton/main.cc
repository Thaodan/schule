#include "karton.hpp"
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
  long how_many=0;
  int item_counter=0;
  stack Stack;
  input Input;
  Sinput(&Input);
  Stack.how_many=Input.quantity/12;
  how_many=Stack.how_many;
  Stack.track_lenght =Input.track_lenght; 
  karton Karton[how_many];
  // lets create our kartons with their items
  create(&Karton,Input.quantity,Input.weight);

  // now count how much weight we got
  while ( how_many > 0 )
    {
      Stack.weight+=Karton[how_many].Items[item_counter].weight;
      Stack.price+=Karton[how_many].Items[item_counter].price;
      
      /* if we are at the 12th item: 
            lets go to the next karton and add the weight of the karton
      */
      if ( item_counter == 12 )
	{
	  item_counter=0;
	  Stack.weight+=Karton[how_many].weight;
	  how_many--;
	}
      
    }
  Stack.rweight  = ((Stack.weight + 50) / 100) * 100;
  Stack.wprice   = (Stack.rweight / 1000) * 0.6;
  output(&Stack);
  return 0;
}
  
