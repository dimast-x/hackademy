#include "../libft.h"

// Converts a lowercase letter to the uppercase one
int ft_toupper(int chr)
{
    if ((chr >= 'a') && (chr <= 'z'))
    {
        chr = 'A' + (chr - 'a');
    }
    return chr;
}
