#include <stdio.h>
#include "string.h"

/**
 * *_strcat - concatenates two strings
 * @dest - character
 * @src - character
 *
 * return: (0)
 *
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, int y = 0
	
	while (*dest)
	{
	dest++;
	x++
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
	dest = (dest - a)
return (dest);
}
