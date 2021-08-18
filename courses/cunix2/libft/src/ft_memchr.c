#include "../libft.h"

// Searches for the first occurrence of the char c in the first n bytes of the string
void *ft_memchr(const void *str, int chr, size_t n)
{
    char *chars = (char *) str;
 
    while (n--)
    {
        if (*chars++ == (char) chr)
        {
            return --chars;
        }
    }

    return NULL;
}


