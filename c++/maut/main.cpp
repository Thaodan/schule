#include "mautstelle.hpp"
#include <iostream>
#include "status_window.hpp"
int main(void)
{
    mautstelle Maustelle;
    status_window(Maustelle);
    for(char quit_char='F';quit_char != 'e';std::cin.get(quit_char))
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
	status_window(Maustelle);
    }

    return 0;
}
