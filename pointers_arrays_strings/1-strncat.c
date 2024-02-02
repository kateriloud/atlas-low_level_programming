#include <stdio.h>
#include "main.h"

/**
 * _strncat- concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * return (dest)
 *
 **/
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (*dest)
	{
		dest++;
		x++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		x++;
		n++;
		src++;
	}

	*dest ='n';
	dest = (dest - x);

return (dest);
}
