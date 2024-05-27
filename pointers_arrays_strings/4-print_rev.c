#include <stdio.h>
#include "main.h"

/**
 * print_rev - entry point
 * Description: prints a string in reverse
 * @*s: char
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int x;
	
	while (s[x] != '\0')
	{
		x++;
	}

	x--; 
	
	while (s[x] != '\0')
	{
		_putchar(s[x--]);
	}

	_putchar('\n'); 
}
