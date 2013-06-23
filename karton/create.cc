#include "karton.hpp"
// create x items and return an arrays with the resulting kartons
void  create
(karton *Karton, long how_many, long weight,long quantity)
{
  // out counter to know when we need to create a new karton
  int item_counter=0;
  long items_created;
  while ( how_many > 0|| quantity > 0)
    {
      Karton->Items[item_counter].weight=weight;
      Karton->Items[item_counter].price=ITEM_PRICE;;
      item_counter++;
      if ( item_counter  == 12 )
	{
	  Karton++;
	  item_counter=0;
	  how_many--;
	}
      items_created++;
      quantity--;

    }	
}
