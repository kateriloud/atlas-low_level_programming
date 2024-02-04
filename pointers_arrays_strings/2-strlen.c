#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of a string
 * @s: int
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (*s)
	{
		k++;
		s++;
	}
	return (k);
}
