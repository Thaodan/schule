#include "kabuch.hpp"
#include "string.h"
vector<string> split(char delim[], char str[])
/*
  @brief takes  a str(ing)  and splits it by delim(iter)
  @param delim  string by we split
         str string to split
  @returns split string
*/
{
    vector<string> tmp_str; /*  string that we return    */
    char *cur_token, *ptr; /* current pointer and token*/
    int tmp_str_i=0; 

    for(str; ; str = NULL )
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
	}
    }
    return tmp_str;
}
