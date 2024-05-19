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
	int x = 97;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
