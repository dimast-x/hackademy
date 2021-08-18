#include "../libft.h"

// Checks if the character is alphabetic
int ft_isalpha(int chr)
{
    return ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'));
}
