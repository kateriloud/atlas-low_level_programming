#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 * Description: checks for uppercase letter & prints 1 and 0 for lowercase
 * @c: int
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (0);
	}

	return (0);
}
