#include "kabuch.hpp"

int main(void)
{
    vector<schuler> klasse;
    while (1)
    {
	if ( ! eingabe(&klasse) )
	    return false;
      
	tab_ausgabe(&klasse);
	histogramm(&klasse);
    }
    return 0;
}
