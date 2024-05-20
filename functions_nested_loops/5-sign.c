#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - entry point
 * Description: prints the sign of a number with return of 1 -1 or 0
 * @n: int
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
        if (n > 0)
        {
		_putchar('+');
                return (1);
        }
        else if (n < 0)
        {
		_putchar('-');
                return (-1);
        }
        else
        {
		_putchar('0');
                return (0);
        }

        return (0);
}
