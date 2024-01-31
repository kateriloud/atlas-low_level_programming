#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints whether a number is positive, negative, or zero
 * @n: number
 *
 * Return (-1, 0, 1)
 *
 **/

int print_sign(int n)
{
	int result;
	
	if (n < 0)
	{
		result = -1;
		putchar('-');
	}
	while(n > 0)
	{
		result = 1;
		putchar('+');
	}
	while (n == 0)
	{
		result = 0;
		putchar('0');
	}
return (result);
}
