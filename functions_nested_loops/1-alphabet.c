#include "main.h"

/**
 * main - entry point
 *
 * Description: prototype print_alphabet prints lowercase alphabet
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	int x = 97;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
