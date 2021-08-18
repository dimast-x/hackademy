#include "../libft.h"

// Copies the unsigned char to the first n characters of the string
void *ft_memset(void *str, int chr, size_t n)
{
    unsigned char *target = str;
    
    while (n-- > 0)
    {
        *target++ = (unsigned char) chr;
    }
    
    return str;
}
