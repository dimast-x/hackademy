#include "../libft.h"

// Deletes whitespaces at the beginning and at the end of a string
char *ft_strtrim(char const *s)
{
    size_t len;
    int spaces = 0;
    int start = -1;
    int end = 0;
    
    for (len = 0; s[len]; len++)
    {
        if (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
        {
            if (start == -1)
            {
                spaces++;
            }
        }
        else if (start == -1)
        {
            start = len;
        }
        else
        {
            end = len;
        }
    }
    if (spaces >= end)
    {
        spaces = 1;
    }
    
    char *res = (char *) malloc(end - spaces + 1 + 1);
    if (!res)
    {
        return NULL;
    }
    ft_memcpy(res, &s[spaces], end - spaces + 1);
    res[end - spaces + 1] = '\0';

    return res;
}


