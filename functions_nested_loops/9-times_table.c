#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "main.h"

/**
 * times_table - entry point
 * Description: prints the 0-9 times table with , and space
 * @: no parameters
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int num, digit, result;

	for (num = 0; num <= 9; num++)
	{
 
		for (digit = 0; digit <= 9; digit++)
		{
			result = num * digit;

			if (digit == 0)
			{
				_putchar(result + '0');
			}
			else 
			{
				_putchar((result % 10) + '0');
			}
			_putchar((result / 10) + '0');
				if (result < 10)
				{
					_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
