#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints lowercase alphabet x10 using putchar
 *
 * @: no parameters
 *
 * Return: Always success (0)
 */

void print_alphabet_x10(void)

{
	int x = 97, y = 0;

	while (y < 10)
	{
		y++;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	}
	_putchar('\n');

	return;
}
