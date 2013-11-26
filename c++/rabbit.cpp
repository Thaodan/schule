#include <iostream>


using namespace std;


int rabbit(int &rabbit_stack)
{
  return rabbit(rabbit_stack-1)+rabbit(rabbit_stack-2);
}

int main() 
{
  int rabbit_stack;

  return 0;
}
