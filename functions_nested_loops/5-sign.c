#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints whether a number is positive, negative, or zero
 * @n: number
 *
 * Return (0)
 *
 **/

int print_sign(int n)
{
	for(n = 0)
	{
		putchar('0');
	}
	for(n < 0)
	{
		putchar('+');
	}
	else
	{
	putchar('-');
	}
return (0);
}
