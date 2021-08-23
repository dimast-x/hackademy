#include "../libft.h"

// Deletes whitespaces at the beginning and at the end of a string
char *ft_strtrim(char const *s)
{
    size_t len;
    int spaces = 0;
    
    for (len = 0; s[len]; len++)
    {
        if (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
        {
            spaces++;
        }
    }

    len = len - spaces;
    char *res = (char *) malloc(len + 1);
    if (!res)
    {
        return NULL;
    }
    
    while (*s++)
    {
        if (*s != ' ' && *s != '\n' && *s != '\t')
        { 
            *res++ = *s;
        }
    }
    *res = '\0';

    return res;
}


