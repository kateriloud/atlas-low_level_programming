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
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++ )
		{
		x = x * y;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return;
}
