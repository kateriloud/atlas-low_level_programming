#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints lowercase alphabet x10 using putchar
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int i;

	for ( i = 0; i < 9; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
		return;
}
