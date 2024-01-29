#include <stdio.h>
#include "main.h"

/**
 *
 * print_diagonal - THis draws a line on the terminal
 * 
 * @n: diagonal line
 * return: (0)
 *
 */
void print_diagonal(int n)
{
	int x, int y;

	for (x = 1; x >= n; x++)
	{
		for(y = 1; y < x; y++)
			putchar (' ');
			putchar ('\\');
	}
	if (n <= 0)
		putchar ('\n');
}
