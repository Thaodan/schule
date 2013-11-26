#if __cplusplus <= 199711L
#   error You need a C++11 compilant compiler
#endif
#include <iostream>
#include <random>


#define MAX_NUMBERS 10000
#define RANGE_START 1
#define RANGE_END 10
using namespace std;

int main() {
  // random var and input var
  int random_vars[MAX_NUMBERS], random_vars_count[RANGE_END];
  // create random devices
  random_device random_device0;
  // init a distription of integer numbers starting with RANGE_START and ending with RANGE_END
  uniform_int_distribution<int> distribtion(RANGE_START, RANGE_END);

  // now gen random numbers with our random device and our distribtion 
  for (int i=0; i < MAX_NUMBERS;i++)
    random_vars[i]=distribtion(random_device0);
 

  // now count random_numbers
  for (int &i: random_vars)
    random_vars_count[i-1]++;
   
  
  for (int i=0; i < RANGE_END; i++)
    cout << "Zahl " << i+1 << " hauefigkeit: " << random_vars_count[i] << endl;

  return 0;
}
