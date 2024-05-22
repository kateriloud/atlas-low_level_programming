#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - entry point
 * Description: prints the numbers 0 to 9 folllowed by newline
 * @: no parameter
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
	return;
}
