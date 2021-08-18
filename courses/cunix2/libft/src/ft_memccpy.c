#include "../libft.h"

// Copies bytes from src to dest, up to the first occurrence of the char c, or until n bytes
void *ft_memccpy(void *dest, const void *src, int chr, size_t n)
{
    char *schr = (char *) src;
    char *dchr = (char *) dest;

    while (n--)
    {
        *dchr++ = *schr;
	
        if (*schr++ == chr)
        {
            return dchr;
        }
    }

    return NULL;
}


