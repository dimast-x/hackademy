#include "../libft.h"

// Finds the first occurrence of the substring in the string 
char *ft_strstr(const char *str, const char *substr)
{
    if (!*substr)
    {
        return (char *) str;
    }

    for (size_t pos = 0; str[pos]; pos++)
    {
        if (str[pos] == substr[0])
        {
            size_t i = 1;
            while (substr[i] && str[pos + i] == substr[i])
            {
                i++;
            }
            if (!substr[i])
            {
                return (char *)(str + pos);
            }
        }
    }
    return NULL;
}
