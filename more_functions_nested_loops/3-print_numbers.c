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
	int x = 48;

	while (x <= 57)
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
