#include "../libft.h"

// Erases the n bytes of the memory starting from s
void ft_bzero(void *s, size_t n)
{
    char *ptr = (char *) s;
    for (size_t i = 0; i < n; i++)
    {
        *ptr++ = '\0';
    }
}
