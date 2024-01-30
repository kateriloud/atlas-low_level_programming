#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of a string
 * @s: strlen
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
