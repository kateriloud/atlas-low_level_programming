#include <stdio.h>

/**
 * print_line - prints characters
 * description: prints a straight line in place of numbers 
 *
 * return: always (0)
 *
 */
void print_line(int n)
{
	int k;
	int j;

	for(k = 1; k <= n; k++)
	{
		for (j = 1; j < k; j++)
		{
		putchar('_');
		}
	}
	putchar ('\n');
}
