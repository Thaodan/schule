#include "karton.hpp"
// create x items and return an arrays with the resulting kartons
long create
(karton *Karton, long how_many, long weight)
{
  // out counter to know when we need to create a new karton
  int item_counter=0;
  long items_created;
  while ( how_many > 0)
    {
      Karton->Items[item_counter].weight=weight;
      Karton->Items[item_counter].price=7.82;
      item_counter++;
      if ( item_counter  == 12 )
	{
	  Karton++;
	  how_many--;
	  item_counter=0;
	}
      items_created;

    }	
  return items_created;
}
