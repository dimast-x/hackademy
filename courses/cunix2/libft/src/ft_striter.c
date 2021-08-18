#include "../libft.h"

// Applies the func f to each char of the string
void ft_striter(char *s, void (*f)(char *))
{
    while (*s)
    {
        f(s);
        s++;
    }
}


