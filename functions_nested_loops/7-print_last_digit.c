#include "main.h"
#include <stdio.h>

/**
 * print_last_digit(int) - prints last digit of number
 * @int  - integer
 * return: last digit
 *
 **/
int print_last_digit(int n)
{
int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
		putchar(last);
		return(last);
}
