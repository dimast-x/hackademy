#include <stdlib.h>

char *my_itoa(int nmb)
{
	char *pos = malloc(12);
	char *string = pos;

	if (nmb == 0)
	{
		*pos++ = '0';
        	*pos = '\0'; 
		return string;
	}

	if (nmb < 0)
	{
		nmb *= -1;
		*pos++ = '-';
	}

	int temp = nmb;

	while(temp > 0)
	{
		*pos++ = '0';
		temp /= 10;
	}

	*pos-- = '\0';

	while(nmb > 0)
	{
		*pos-- = (nmb % 10) + '0';
		nmb /= 10;
	}

	return string;
}
