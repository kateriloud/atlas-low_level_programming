#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - entry point
 * Description: prints straight line of character using putchar 
 * @n: int
 * Return: Always 0 (success)
 */

void print_line(int n)
{

	if (n > 0)
	{
		_putchar('_');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	return;
}
