#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of lines
 * return: always (0)
 *
 */
void print_line(int n)
{
	int k;

	if(n <= 0)
	{
	putchar ('\n')
	}
	else
	{
	for(k = 0; k < n; k++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
