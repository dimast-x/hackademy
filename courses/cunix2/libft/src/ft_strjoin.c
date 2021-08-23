#include "../libft.h"

// Concatenates two strings
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    for (s1_len = 0; s1[s1_len]; s1_len++);
    for (s2_len = 0; s2[s2_len]; s2_len++);

    char *res = (char *) malloc(s1_len + s2_len + 1);
    if (!res)
    {
        return NULL;
    }
    
    int count = 0;
    for (size_t i = 0; i < s1_len; i++)	    
    {
        res[count++] = s1[i];
    }
    for (size_t i = 0; i < s2_len; i++)
    {
        res[count++] = s2[i];
    }
    res[count] = '\0';

    return res;
}


