#include "../libft.h"

// Copies n characters from src to dest
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *from = (char *) src;
    char *to = (char *) dest;

    if (from == to || n == 0)
    {
        return dest;
    }

    if (to > from)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            to[i] = from[i];
        }

        return dest;
    }

    if (from > to)
    {
        for (size_t i = 0; i < n; i++)
        {	
            to[i] = from[i];
        }

        return dest;
    }

    return dest;
}


