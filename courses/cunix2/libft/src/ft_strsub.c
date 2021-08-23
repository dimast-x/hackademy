#include "../libft.h"

// Returns a substring as a new string
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t full_length;
    for (full_length = 0; s[full_length]; full_length++);  

    if (start > full_length)
    {
        len = 0;
    }
    else if (len + start > full_length)
    {
        len = full_length - start;
    }

    char *res = (char *) malloc(len + 1); 
    if (!res)
    {
        return NULL;
    }
    
    res[len] = '\0';
    while (len--)
    {
        res[len] = s[len + start];
    }

    return res;
}


