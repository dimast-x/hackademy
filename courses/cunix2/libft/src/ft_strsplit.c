#include "../libft.h"

// Splits a string by a delimiter
char **ft_strsplit(char const *s, char c)
{
    size_t len;
    for (len = 0; s[len]; len++);
    int items = 0;

    if (s[0] != c && len != 0)
    {
        items++;
    }

    for (size_t i = 1; i < len; i++)
    {
        if (s[i - 1] == c && s[i] != c)
        {
            items++;
        }
    }

    char **res = (char **) malloc((items + 1) * sizeof(char *));
    if (!res)
    {
        return NULL;
    }
    res[items] = '\0';

    size_t word_start = 0;
    size_t item = 0;

    for (size_t pos = 0; pos < len; pos++)
    {
        if (s[pos] == c)
        {
            if (pos != word_start)
            {
                int length = pos - word_start; 
                res[item] = (char *) malloc(length + 1);
                ft_memcpy(res[item], &s[word_start], length); 
                res[item][length] = '\0';
                word_start = pos + 1;
                item++;
            }
            else
            {
                word_start++;
            }
        }
    }

    if (word_start != len)
    {
        size_t length = len - word_start;
        res[item] = (char *) malloc(length + 1);
        ft_memcpy(res[item], &s[word_start], length); 
        res[item][length] = '\0';
    }

    return res;
}
