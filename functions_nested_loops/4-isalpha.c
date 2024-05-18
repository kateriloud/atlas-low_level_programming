#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - entry point
 * Description: program that searches and prints 1 for upper/lowercase
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		_putchar(c);
	}
	return 0;
}
