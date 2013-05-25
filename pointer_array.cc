#include <iostream>
using namespace std;

void verdoppeln(int *a)
{
  *a=*a*2;
  switch(*a) 
    {
    case 1 ... 2: cout << a; break;
    }
  
  a++;
  *a=*a*2;
}


int main()
{
  int a[2]={1,3};
  int *b = a;
  
  verdoppeln(b);
  cout << a[0] << endl;
  cout << a[1] << endl;
  
  return 0;
}
