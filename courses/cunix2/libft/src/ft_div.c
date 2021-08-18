#include "../libft.h"

// Returns the quotient and remainder of the division
div_t ft_div(int numer, int denom)
{
    div_t res;
    res.quot = numer / denom;
    res.rem = numer % denom;

    return res;
}
