#include <iostream>
using namespace std;
int *genutzte_buchstaben;
int austausche(char buchstabe)
{
        #define STARTWERT 97
        int zahl = buchstabe - STARTWERT;
        return zahl;
}
vector<char> verschlussel(vector<char> *text)
{
    vector<char> ruckgabe_text;
    for (int index=0; index < text;index++)
    {
	ruckgabe_text[i]=austausche(text[index])  + *genutzte_buchstaben;    
	*genutzte_buchstaben= *genutzte_buchstaben + 1;
    }  

}
int main(void)
{       
        char wort[] = { 'h', 'a', 'l', 'l','o' };
        genutzte_buchstaben = new int;
        *genutzte_buchstaben=0;
     
        cout << endl;
        cin.get();
        cin.get();
        return 0;
}
