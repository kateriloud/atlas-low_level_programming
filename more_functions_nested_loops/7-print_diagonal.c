#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - will print diagonal line
 * @n: diagonal line
 *
 * return: (0)
 *
 */
void print_diagonal(int n)
{
int x;
int  y;
	if (n <= 0)
	{
	putchar('\n')
	}

	for (x = 1; x <= n, x++)
	{
	for (y = 1; y < x; y++)
		{
		putchar(' ');
		}

		{
		putchar ('\\');
		}
		
		{
		putchar('\n');
		}
	}
}
