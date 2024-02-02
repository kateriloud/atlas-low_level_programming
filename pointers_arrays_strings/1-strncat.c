#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (*dest)
	{
		dest++;
		x++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		x++;
		src++;
		n--;
		if (n == 0)
		{
		break;
		}
	}

	dest = (dest - x);

return (dest);
}
