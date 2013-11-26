/* Bjoern Bidar
   ITA-E1
   05.02.2013
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main () {
	float number0;
	float number1;
	float result;
	char 	manipulator, condition_char;
	
	do
	  {
	    number0=0;
	    number1=0;
	    result=0;
	    condition_char='y';

	    cout << "Bitte geben sie eine Zahl ein \n";
	    cin >> number0;

	    cout << "Bitte geben sie eine zweite Zahl ein\n";
	    cin >> number1;

	    cout << "Bitte Operator eingeben (+,-,*,/) \n";
	    cin >> manipulator;

	    switch (manipulator)
	      {
		case '+': result=number0 + number1; break;
		case '-': result=number0 - number1; break;
		case '*': result=number0 * number1; break; 
		case '/': 
		{
		    if (number1 <= 0)
		    {
		      cout << "Zahl 2 war unter 0, exit!\n";
		      #if defined _WIN32 || defined _WIN64 // wait for press a key only if programm 			is compiled under windows/wine
			getchar();
		      #endif
		      return 1;
		    }
		    else
		      result=number0 / number1; break;
		}
		default: 
		{
		cout << "Falscher Operator, exit!\n";
		#if defined _WIN32 || defined _WIN64 // wait for press a key only if programm 			is compiled under windows/wine
		  getchar();
		#endif
		return 1;
		}
	      }
	    cout << number0  << manipulator << number1 << "=" << result << endl;
	    
	    cout << "Noch mal, wenn nein 'n' eingeben\n";
	    cin  >> condition_char;
	
	  } while (  condition_char != 'n'  &&  condition_char != 'N' );

	#if defined _WIN32 || defined _WIN64 // wait for press a key only if programm 			is compiled under windows/wine
	
        getchar();
	#endif
	return 0;
}
