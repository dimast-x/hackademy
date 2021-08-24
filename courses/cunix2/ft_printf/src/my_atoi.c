int my_atoi(const char *nptr) 
{
    int result = 0;
    int sign = 1;

    if (*nptr == '-')
    {
        sign = -1;
        nptr++;
    }
	
    for (; *nptr >= '0' && *nptr <= '9'; nptr++)
    {
        result = result * 10 + (*nptr - '0');
    }

    return result * sign;
}
