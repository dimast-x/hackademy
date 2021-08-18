#include "../libft.h"

// Converts an uppercase letter to the lowercase one
int ft_tolower(int chr)
{
    if ((chr >= 'A') && (chr <= 'Z'))
    {
        chr = 'a' + (chr - 'A');
    }
    return chr;
}

