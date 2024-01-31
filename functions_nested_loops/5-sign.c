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
	int print;
	
	while(n < 0)
	{
		print = -1;
		putchar('-');
	}
	while(n > 0)
	{
		print = 1;
		putchar('+');
	}
	while (n == 0)
	{
		print = 0;
		putchar('0');
	}
return (0);
}
