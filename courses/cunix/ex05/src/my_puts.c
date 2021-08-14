#include <unistd.h>
#include <stdio.h>

int my_puts(const char *s)
{
	while (*s) if (write(1, s++, 1) == EOF) return EOF;
	
	if (write(1, "\n", 1) == EOF) return EOF;
	
	return 1;
}
