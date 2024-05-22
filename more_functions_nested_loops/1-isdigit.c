#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - entry point
 * Description: checks for digits 1-9 and prints 1, 0 printed otherwise
 * @c: int
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
	return (0);
}
