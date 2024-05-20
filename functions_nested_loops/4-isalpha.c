#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - entry point
 * Description: program that searches and prints 1 for upper/lowercase
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return 0;
}
