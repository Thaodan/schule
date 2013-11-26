#include "kabuch.hpp"
int lieszahl(void)
{
    int num;
    cin >> num;
    return num;
}

bool add_name(schuler *Schuler)
{
    string raw_name;
    vector<string> name;

    cout << "Please give name,first name(press q to quit):";
    cin >> raw_name;
    if ( raw_name[0] == 'q' )
	return false;
    name = split(",", raw_name);
    Schuler->name = name[0];
    Schuler->vorname = name[1];

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
