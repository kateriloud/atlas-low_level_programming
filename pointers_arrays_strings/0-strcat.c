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
	while (*dest)
	{
	dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
return (dest);
}
