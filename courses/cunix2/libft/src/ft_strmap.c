#include "../libft.h"

// Applies the func f to each char of the string and return as a new string
char *ft_strmap(char const *s, char (*f)(char))
{
    int len;
    for (len = 0; s[len]; len++);  
    char *res = (char *) malloc(len + 1);

    res[len] = '\0';  
    while (len--)
    {
        res[len] = f(s[len]);
    }

    return res;
}


