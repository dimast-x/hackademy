#include "../libft.h"

// Compares the first n bytes str1 and str2 memory areas
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    if (n == 0)
    {
        return 0;
    }
    
    unsigned char *temp1 = (unsigned char *) str1;
    unsigned char *temp2 = (unsigned char *) str2;
    
    n--;
    while (*temp1 == *temp2 && n--)
    {
        temp1++;
        temp2++;
    }
    
    return (int)(*temp1 - *temp2);
}


