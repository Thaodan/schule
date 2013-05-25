#include "getName.hxx"
using namespace std;
void getName(void)
{
  char Name[NAME_MAX_CHARS];
  bool command_mode=false;
  cout << "Bitte Name" <<endl;
  for (int Name_Index=0; Name_Index < NAME_MAX_CHARS;Name_Index++)
  {
    cin >> Name[Name_Index];
    if ( Name[Name_Index] == '!' )
      {
	command_mode=true;
	Name[Name_Index]=;
      }
    else
      {
	if (command_mode == true)
	  {
	    switch(Name[Name_Index])
	      {
	      case 'q': break;
	      }
	  }
      }
  }
  for (int Name_Index=0; Name_Index < NAME_MAX_CHARS;Name_Index++)
    cout << Name[Name_Index];
 
}



