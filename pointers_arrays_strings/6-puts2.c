#include <stdio.h>
#include "main.h"

/**
 * puts2 - entry point
 * Description: starting at first char prints every other char of string
 * @str: char
 * Return: Always 0 (success)
 */

void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x+=2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
