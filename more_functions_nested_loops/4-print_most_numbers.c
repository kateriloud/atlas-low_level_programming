#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: prints single  digit nums except 2 and 4
 * @: no parameters
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int x = 48;

	while (x <= 57)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
		x++;
	}

	_putchar('\n');
}
