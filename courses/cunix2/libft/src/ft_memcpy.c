#include "../libft.h"

// Copies n characters from memory area src to dest
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *schr = (char *) src;
    char *dchr = (char *) dest;

    while (n--)
    {
        *dchr++ = *schr++;
    }

    return dest;
}


