#include <iostream>

using namespace std;

float yield(float stack, float multiplicator, int years)
{
  for (;years > 0;years--)
    {
      stack+=stack * multiplicator / 100;
    }
  
  return stack;
}

int main() {
  float stack, multiplicator;
  int years;
  cout << "Bitte Kapital" << endl;
  cin >> stack;
  
  cout << "Bitte Zinsen" << endl;
  cin  >> multiplicator;
  
  cout << "Bitte dauer in ganzen Jahren";
  cin  >> years;

  cout <<  yield(stack,multiplicator,years) << endl;

  return 0;

}
