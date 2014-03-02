#include "mautstelle.hpp"
#include <iostream>
int main(void)
{
    mautstelle Maustelle;
    char quit_char;

    while((c = std::cin.get(quit_char)) != 'e')
    {
	switch(c)
	{
	case l:
	{
	    lkw_bezahlt();
	    break;
	}
	case p:
	    pkw_bezahlt();
	    break;
	}
    }

    return 0;
}
