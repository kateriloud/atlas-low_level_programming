#include <stdio.h>
#include "main.h"

/**
 * print_sign(int n) - prints positive, negative, or zero
 * @n: number
 * description: prints +1, -1, or 0 depending on the number
 * Return: (-1, 0, 1)
 *
 **/

int print_sign(int n)
{
	int value;

	if (n < 0)
	{
		value = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else
	{
		value = 0;
		_putchar('0');
	}
return (value);
}
