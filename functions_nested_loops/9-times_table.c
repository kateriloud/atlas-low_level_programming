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
	int row;
	int col;

	for (col = 0; col <= 9; col++)
	{
	for (row = 0; row <= 9; row++ )
		{
		(row * col);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return;
}
