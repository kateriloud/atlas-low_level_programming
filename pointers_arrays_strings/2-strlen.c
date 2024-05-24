#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <math.h>

/**
 * _strlen - entry point
 * Description: function that counts string length
 * @s: char
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
