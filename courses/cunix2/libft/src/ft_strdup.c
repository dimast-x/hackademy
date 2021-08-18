#include "../libft.h"

// Duplicates a string
char *ft_strdup(const char *str)
{
    int length = 0;
    while (str[length])
    {
        length++;
    }

    char *mem = (char *) malloc(length + 1);
    if (mem == NULL)
    {
        return NULL;
    }

    char *temp = mem;
    while (*str)
    {
        *temp++ = *str++;
    }
    *temp = '\0';

    return (mem);
}
