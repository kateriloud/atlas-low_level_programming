#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of a string as value
 * description - calculates length of a string by counting number of characters
 * @s: int
 *
 * return: string length
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
