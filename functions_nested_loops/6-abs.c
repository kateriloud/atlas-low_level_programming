#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <math.h>

/**
 * _abs - entry point
 * Description: function that computes absolute value
 * @x: int
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	while ((x > 0) - (x < 0))
	{
		putchar(x);
	}
	return 0;
}
