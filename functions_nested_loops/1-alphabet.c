#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;
	while (x = 'a' && x <= 'z')
	{	_putchar(x);
		_putchar('\n');
	}
	return (0);
}
