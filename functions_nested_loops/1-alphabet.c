#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - entry point
 *
 * Return: (0) always
 **/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return;
}
