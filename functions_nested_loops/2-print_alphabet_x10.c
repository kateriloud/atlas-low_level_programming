#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print a-z ten times
 **/
void print_alphabet(void)
{
	int i;
	char j;

	for (i = 0 < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
