#include "karton.hpp"
void output(stack *Stack)
{
  cout << "-------------------------------------------------" << endl;
  cout << "We got " << Stack->how_many << " kartons" << endl;
  cout << "Kilometers :" << Stack->track_lenght << endl;
  cout << "Weight :" << Stack->weight << endl;
  cout << "rounded weight: " << Stack->rweight << endl;
  cout << "weight price: " << Stack->wprice << endl; 
  cout << "Netto profit:" << Stack->price << endl;
  cout << "Profit + Weight:" << Stack->wprice + Stack->price << endl;
  cout << "Discount :" << Stack->discount  << endl;
  cout << "Final Price " << Stack->fprice << endl;
}
