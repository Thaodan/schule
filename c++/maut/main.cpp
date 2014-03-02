#include "mautstelle.hpp"
#include <iostream>
int main(void)
{
    mautstelle Maustelle;
    char quit_char;
    
    for(std::cin.get(quit_char);quit_char != 'e';)
    {
	switch(quit_char)
	{
	case 'l':
	{
	    Maustelle.lkw_bezahlt();
	    break;
	}
	case 'p':
	    Maustelle.pkw_bezahlt();
	    break;
	}
    }

    return 0;
}
