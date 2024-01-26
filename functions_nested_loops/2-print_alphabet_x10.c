#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print a to z ten times
 *
 *Return: (0) always
 **/
void print_alphabet_x10(void)

{

	char alphabet = 'a';

	int k = 10;

	while (k >= 1)
	{

	alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		k--;
		_putchar('\n');
	}

}
