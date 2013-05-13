#include "karton.hpp"
// create x items and return an arrays with the resulting kartons
void create(karton *Karton, long quantity, long weight)
{
  // out counter to know when we need to create a new karton
  int item_counter;
  long karton_counter; 
  while ( quantity > 0)
    {
      item Item;
      *Karton.Items[item_counter].weight=weight;
      if ( item_counter  == 12 )
	{
	  karton_counter++;
	  item_counter=0;
	}

      quantity--;
    }	
}
