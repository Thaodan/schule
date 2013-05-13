#include "karton.hpp"
// write vars to our struct
bool Sinput(input *Input)
{
  cout << "How  many items do you wan't?" << endl;
  cin  >> Input->quantity;
  if (Input->quantity == 0 )
    return false;

  cout << "What's the weight of one item?";
  cin  >> Input->weight;

  cout << "How long is your track?";
  cin  >> Input->track_lenght;
  
  return true;
}
