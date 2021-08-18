#include "../libft.h"

// Finds the first occurrence of a character in a string
char *ft_strchr(const char *str, int chr)
{
    for (;; str++)
    {
        if (*str == (char) chr)
        {
            return (char *) str;
        }
        if (*str == '\0')
        {
            return NULL;
        }
    }
}

