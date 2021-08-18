#include "../libft.h"

// Finds the last occurrence of a char
char *ft_strrchr(const char *str, int chr)
{
    for (char *temp = NULL;; str++) 
    {
        if (*str == (char) chr)
        {
            temp = (char *) str;
        }
        if (*str == '\0')
        {
            return temp;
        }    
    }
}
