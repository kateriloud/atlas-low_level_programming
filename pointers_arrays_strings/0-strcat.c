#include <stdio.h>
#include "string.h"

/**
 * *_strcat - concatenates two strings dest and src
 * @*dest - string that is the destination
 * @*src - string that is the source
 *
 * return: (0)
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
