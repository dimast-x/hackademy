#include "../libft.h"

// Checks for an ASCII character (in the range 0 to 127) 
int ft_isascii(int chr)
{
    return (chr >= 0 && chr <= 127);
}
