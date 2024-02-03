#include "main.h"
#include <stdio.h>

/**
 * print_last_digit(int) - prints last digit of number
 * @n  - integer input
 * return: last digit
 *
 **/
int print_last_digit(int n)
{
int last;

	n %= 10;
	if (n < 0)
	{
	n *= -1;
	}
		putchar(n);
		return(last);
}
