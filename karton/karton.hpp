/*
  Item
  Item Weight 
  Items 
  Items Weight
  
  Item per carton: 12
  Carton weight: 24kg
  
  round at: 100kg

  discount: 3%, at 10k
  discount: 5%, at 10k+ till 50k
  discount: 7%, at 50,001 

  
 */


#ifndef KARTON_HPP
#define KARTON_HPP
using namespace std;
#include <iostream>
/*
  price of our item 7.85€
  
*/
typedef struct {
  double price;
  long weight;;
} item;


/*
  define our karton:
  weight is counted in gramm
  base weight is 24k gramm
*/

typedef struct {
  long weight=24;
  item  Items[12];
} karton;

/*
  struct for result with:
*/
typedef struct {
  long weight; // weight
  long rweight; // rounded weight
  double wprice; // weight price
  double price; //  ware price
  double fprice; // final price 
  double discount; // discount
  double how_many;
  long track_lenght;
 } stack;

typedef struct {
  long quantity=0;
  long track_lenght;
  long how_many;
  long weight;
} input;
long create(karton *Karton,long quantity, long weight);
bool Sinput(input *Input);
void output(stack *Stack);
#endif
