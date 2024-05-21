#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "main.h"

/**
 * times_table - entry point
 * Description: prints the 0-9 times table with , and space
 * @: no parameters
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int r;
	int c;

	for (r = 0; r <= 9; r++)
	{
	for (c = 0; c <= 9; c++)
		{
		_putchar(r);
		}
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	_putchar('\n');
	return;
}
