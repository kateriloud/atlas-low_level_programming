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
 		_putchar(num + '0');

	for (digit = 1; digit <= 9; digit++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * digit;

			if(result <= 9)
			{	
				_putchar(' ');
			}

			else 
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

		}
	}
	_putchar('\n');
}
