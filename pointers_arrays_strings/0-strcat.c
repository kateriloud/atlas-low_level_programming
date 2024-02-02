#include <stdio.h>
#include "string.h"

/**
 * _strcat - concatenates strings *dest and *src
 * @dest : destination
 * @src : source
 *
 * Return: (dest)
 *
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

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
		y++;
		src++;
	}

	*dest = '\0';
	dest = (dest - x);

return (dest);
}
