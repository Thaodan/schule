#include "kabuch.hpp"
int lieszahl(void)
{
    int num;
    cin >> num;
    return num;
}

bool add_name(schuler *Schuler)
{
    string name;
    string vorname;

    cout << "Please give name,first name(press q to quit):";
    cin >> name[0];
    if ( name[0][0] == 'q' )
	return false;
    cin >> name[1];
    Schuler->name = name;
    Schuler->vorname = vorname;

    return true;
}

bool add_exam(schuler *Schuler)
{
    char tmp_char;

    cout <<"Please give grade(q to quit)";
    cin >> tmp_char;
    if (tmp_char == 'q' )
	return false;
    Schuler->noten[Schuler->noten.size()] = tmp_char - '0';

    return true;
}

bool eingabe(vector<schuler> *klasse)
{
    /* loop to spawn the menus  
       the menus are ordered like this:
       add_name():
           add_exam()
       
       if the main menu returns false, we quit
       if a sub menu returns false, we break its loop
     */
    
    for(;;)
    {
	if (! add_name(&klasse->back()) )
	    return false;
	for(;;)
	{
	    if (! add_exam(&klasse->back()) )
		break;
	}

    }
    return true;
}
