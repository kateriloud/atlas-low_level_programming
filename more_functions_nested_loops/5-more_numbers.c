#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <math.h>

/**
 * more_numbers - entry point
 * Description: prints numbers 0-14 a total of 10 times
 * @: no parameters
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
	_putchar('\n');
	}
}
