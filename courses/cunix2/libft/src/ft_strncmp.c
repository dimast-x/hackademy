#include "../libft.h"

// Compares up to num characters of two strings
int ft_strncmp(const char *str1, const char *str2, size_t num)
{
    for (size_t i = 0; i < num; i++)
    {
        if (*str1 > *str2) 
        {
            return 1;
        }
        if (*str1 < *str2)
        {
            return -1;
        }
        str1++;
        str2++;
    }
	
    return 0;
}
