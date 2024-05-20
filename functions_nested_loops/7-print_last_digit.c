#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number
 * @x: int
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{

	x %= 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar('0' + x);

	return (x);
}
