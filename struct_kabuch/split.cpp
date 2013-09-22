#include "kabuch.hpp"
#include <cstring>
vector<string> split(char delim[], string str)
/*
  @brief takes str(ing)  and splits it by delim(iter)
  @param delim  string by we split
         str string to split
  @returns split string
*/
{
    char *dup_str = strdup(str.c_str());
    vector<string> tmp_str; /*  string that we return    */
    char *cur_token, *ptr; /* current pointer and token*/
    int tmp_str_i=0; 

    for(;;)
    {
	cur_token = strtok_r(dup_str, delim,  &ptr);
	if ( cur_token == NULL )
	{
	    /* ok we're done lets have break */
	    break;
	}
	else
	{
	    tmp_str[tmp_str_i]=cur_token;
	    tmp_str_i++;
	}
    }
    return tmp_str;
}
