#include <iostream>

using namespace std;

bool call(int *

value)
{
  cout << value;
  return true;
}

int main()
{
  call(4);
  return 0;
}
