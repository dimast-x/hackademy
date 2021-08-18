#include "../libft.h"

// Finds the first occurrence of the substring, where not more than n chars are searched
char *ft_strnstr(const char *str, const char *substr, size_t len)
{
    if (!*substr)
    {
        return (char *) str;
    }

    for (size_t pos = 0; str[pos] && pos < len; pos++)
    {
        if (str[pos] == substr[0])
        {
            size_t i = 1;
            while (substr[i] && str[pos + i] == substr[i] && (pos + i) < len)
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
